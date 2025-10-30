#include <iostream>

using namespace std;

class Node{
    public:
        int value;
        Node* next;

    Node(int value){
        this->value = value;
        next = nullptr;
    }
};

void traverse(Node* head){
    Node* tmp = head;
    while (tmp)
    {
        cout << tmp->value << "->";
        tmp = tmp->next;

        if (tmp->next == head){
            cout << tmp->value << endl;
            break;
        }
    }
}

void insertAtStart(Node* &head, int val){
    if (head == nullptr)
    {
        head = new Node(val);
        return;
    }
    
    Node* newNode = new Node(val);
    Node* tmp = head;

    while (tmp->next != head)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
    newNode->next = head;
    head = newNode;
}

void clear(Node* &head){
    if(head == nullptr) return;
    if (head->next == head)
    {
        delete head;
        return;
    }
    
    Node* tmp = head->next;

    while (tmp != head)
    {
        Node* beDeleted = tmp;
        tmp = tmp->next;
        delete beDeleted;
    }
    delete head;
    cout << "All nodes freed" << endl;
}

void deleteFromStart(Node* &head){
    if(head == nullptr) return;

    if (head->next == head)
    {
        delete head;
        return;
    }
    
    Node* tmp = head;

    while (tmp->next != head)
    {
        tmp = tmp->next;
    }

    tmp->next = head->next;
    tmp = head;
    head = head->next;
    delete tmp;
}

void deleteFromEnd(Node* &head){
    if(head == nullptr) return;

    if (head->next == head)
    {
        delete head;
        return;
    }
    
    Node* tmp = head;

    while (tmp->next->next != head)
    {
        tmp = tmp->next;
    }

    delete tmp->next;
    tmp->next = head;
}

void split(Node* head){
    Node* s = head;
    Node* f = head;
    Node* tmp = head;

    while (f->next != head && f->next->next != head)
    {
        s = s->next;
        f = f->next->next;
    }

    while (tmp != s->next)
    {
        cout << tmp->value << "->";
        tmp = tmp->next;
    }
    cout << endl;   
    
    while (tmp != head)
    {
        cout << tmp->value << "->";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    //* Circular Linked List
    //The last node points the head.

    Node* node1 = new Node(1);
    Node* head = node1;

    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node1;

    //traverse(head);

    split(head);
    
    clear(head);

    return 0;
}