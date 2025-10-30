#include <iostream>

using namespace std;

class Node{
    public:
        int value;
        Node* next;
        Node* previous;

    Node(int value){
        this->value = value;
        next = nullptr;
        previous = nullptr;
    }
};

void linkNodes(Node* &node1, Node* &node2){
    node1->next = node2;
    node2->previous = node1;
}

void clear(Node* &head){
    if (head == nullptr)
    {
        return;
    }
    
    while (head->next != nullptr)
    {
        head = head->next;
        delete head->previous;
    }
    delete head;
    cout << "All nodes are freed" << endl;
}

void traverseForward(Node* head){
    if (head == nullptr)
    {
        return;
    }
    
    while (head != nullptr)
    {
        cout << head->value << "<->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

void traverseBackward(Node* head){
    if (head == nullptr)
    {
        return;
    }
    
    while (head->next)
    {
        head = head->next;
    }
    while (head)
    {
        cout << head->value << "<->";
        head = head->previous;
    }
    cout << "NULL" << endl;
}

void insertAtStart(Node* &head, int val){
    Node* newNode = new Node(val);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head->previous = newNode;
    head = newNode;
}

void insertAtBehind(Node* &head, int val){
    if (head == nullptr)
    {
        insertAtStart(head, val);
    }
    
    Node* newNode = new Node(val);
    Node* tmp = head;

    while (tmp->next)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
    newNode->previous = tmp;
}

void insertAtMiddle(Node* &head, int val, int k){
    Node* newNode = new Node(val);

    if (head == nullptr || k == 1)
    {
        insertAtStart(head, val);
        return;
    }

    int counter = 1;
    Node* tmp = head;

    while (counter != k - 1)
    {
        tmp = tmp->next;
        counter++;
    }

    if (tmp->next == nullptr)
    {
        insertAtBehind(head, val);
        return;
    }
    
    newNode->previous = tmp;
    newNode->next = tmp->next;
    newNode->next->previous = newNode;
    tmp->next = newNode;
}

void deleteInStart(Node* &head){
    if (head == nullptr) return;

    if (head->next == nullptr)
    {
        delete head;
        return;
    }

    Node* tmp = head;
    head = head->next;
    head->previous = nullptr;
    delete tmp;
}

void deleteFromEnd(Node* &head){
    if (head == nullptr) return;
    
    if (head->next == nullptr)
    {
        delete head;
        return;
    }
    
    Node* tmp = head;

    while (tmp->next->next != nullptr)
    {
        tmp = tmp->next;
    }

    delete tmp->next;
    tmp->next = nullptr;
}

void deleteAtMiddle(Node* &head, int k){
    if(head == nullptr) return;
    if(head->next == nullptr){
        delete head;
        return;
    }

    if (k == 1)
    {
        deleteInStart(head);
        return;
    }
    
    Node* tmp = head;
    int counter = 1;

    while (counter != k - 1)
    {
        tmp = tmp->next;
        counter++;
    }

    Node* delNode = tmp->next;
    tmp->next = delNode->next;

    if (delNode->next)
    {
        tmp->next->previous = tmp;
    }
    delete delNode;
}

void reverse(Node* &head){
    Node* prev;
    Node* curr = head;

    while (curr)
    {
        prev = curr->previous;
        curr->previous = curr->next;
        curr->next = prev;
        
        if (curr->previous == nullptr)
        {
            prev = curr;
        }
        curr = curr->previous;
    }
    head = prev;
}

int main() {
    //* Doubly Linked List
    //Normally we have one link for each node in "single linked list".
    //This time, we will have for both previous and next node.

    //*ADVANTAGES
    //We can traverse in both ways.
    //Insertion and deletion become easier.

    //* DISADVANTAGES
    //More space are occupied

    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);

    linkNodes(node1, node2);
    linkNodes(node2, node3);
    linkNodes(node3, node4);
    linkNodes(node4, node5);

    Node* head = node1;

    insertAtStart(head, 44);
    insertAtBehind(head, 23);
    insertAtMiddle(head, 5, 3);
    deleteInStart(head);
    deleteFromEnd(head);
    deleteAtMiddle(head, 5);
    traverseForward(head);
    reverse(head);
    traverseForward(head);

    clear(head);
    return 0;
}