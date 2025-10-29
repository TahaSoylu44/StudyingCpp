#include <iostream>

using namespace std;

class Node{
    public:
        int value;
        Node* next;
    
    Node(int v){
        value = v;
        next = nullptr;
    }
};

void traverseLinkedList(Node* head){
    for (Node* i = head; i != nullptr; i = i->next)
    {
        cout << i->value << "->";
    }
    cout << "NULL" << '\n';
    
}

/**
 * @brief Insert a node at the beginning
 * 
 * @param head head node
 * @param value 
 */
void InsertInHead(Node* &head, int value){
    Node* node = new Node(value);
    node->next = head;
    head = node;
}

/**
 * @brief clear all the list
 * prevents the memory leak
 * 
 * @param head 
 */
void clear(Node* &head){
    while(head != nullptr){
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }
}

void InsertionInBehind(Node* &head, int value){
    //! Do not forget to check if it is NULL or not.
    if (head == nullptr)
    {
        InsertInHead(head, value);
    }
    
    Node* newNode = new Node(value);
    Node* tmp = head;
    while (tmp != nullptr)
    {   
        if (tmp->next != nullptr)
        {
            tmp = tmp->next;
        }
        else
        {
            tmp->next = newNode;
            break;
        }
    }
}

void InsertionInMiddle(Node* &head, int value, int pos){
    if (pos == 1)
    {
        InsertInHead(head, value);
    }
    else
    {
        int counter = 0;

        for (Node* i = head; i!= nullptr; i = i->next)
        {
            counter++;

            if (counter == pos - 1)
            {
                Node* newNode = new Node(value);
                newNode->next = i->next;
                i->next = newNode;
                break;
            } 
        }
    }
}

void deleteInHead(Node* &head){
    if (head != nullptr)
    {
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }
}

void deleteInBehind(Node* &head){
    if (head == nullptr)
    {
        return;
    } 
    else if(head->next == nullptr){
        deleteInHead(head);
    }
    else{
        Node* tmp = head;

        while (tmp->next->next != nullptr)
        {
            tmp = tmp->next;
        }
        Node* tmp2 = tmp;
        tmp = tmp->next;
        tmp2->next = nullptr;
        delete tmp;
    }
}

void deleteInMiddle(Node* head, int pos){
    if (head == nullptr)
    {
        return;
    }
    if (pos == 1)
    {
        deleteInHead(head);
        return;
    }
    Node* tmp = head;
    int counter = 1;

    while (counter != pos - 1)
    {
        tmp = tmp->next;
        counter++;
    }
    
    Node* tmp2 = tmp->next;

    if (tmp2->next == nullptr)
    {
        delete tmp2;
        tmp->next = nullptr;
    }
    else
    {
        tmp->next = tmp2->next;
        delete tmp2;
    }
}

void updateNode(Node* head, int val, int pos){
    if (head == nullptr)
    {
        return;
    }
    Node* tmp = head;
    int counter = 1;

    while (counter != pos)
    {
        tmp = tmp->next;
        counter++;
    }
    tmp->value = val;
}

int main() {
    //* What is Linked List?
    //A linear data structure that is used to store a list of items.

    Node* node1 = new Node(5);
    Node* head = node1;
    Node* node2 = new Node(10);

    node1->next = node2;    //(*node1).next = node->next

    Node* node3 = new Node(15);
    node2->next = node3;

    traverseLinkedList(head);
    InsertInHead(head, 20);

    traverseLinkedList(head);
    InsertionInBehind(head, 30);

    traverseLinkedList(head);
    InsertionInMiddle(head, 25, 3);

    traverseLinkedList(head);
    deleteInHead(head);

    traverseLinkedList(head);
    deleteInBehind(head);

    traverseLinkedList(head);
    deleteInMiddle(head, 3);

    traverseLinkedList(head);
    updateNode(head, 58, 2);

    traverseLinkedList(head);

    clear(head);
    return 0;
}