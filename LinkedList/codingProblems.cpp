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

void traverseLinkedList(Node* head){
    for (Node* i = head; i != nullptr; i = i->next)
    {
        cout << i->value << "->";
    }
    cout << "NULL" << '\n';
    
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

//Problem1
void method1(Node* &head){
    if (head == nullptr)
    {
        return;
    }
    
    Node* tmp = head;

    while (tmp->next != nullptr)
    {
        Node* tmp2 = tmp->next;

        if (tmp2->next != nullptr)
        {
            tmp->next = tmp2->next;
            delete tmp2;
            tmp = tmp->next;
        }   
        else{
            delete tmp2;
            tmp->next = nullptr;
        }
    }
}

//Problem2
int middleValue(Node* head){
    if (head != nullptr)
    {
        Node* tmp = head;
        Node* tmp2 = head;

        while (tmp2->next != nullptr)
        {
            tmp = tmp->next;
            tmp2 = tmp2->next->next;
        }
        return tmp->value; 
    }
    return -1; 
}

//Problem3
bool isSame(Node* head1, Node* head2){
    Node* tmp1 = head1;
    Node* tmp2 = head2;

    while (tmp1 != nullptr && tmp2 != nullptr)
    {
        if (tmp1->value == tmp2->value)
        {
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
        else{
            return false;
        }
    }
    if (tmp1 != nullptr || tmp2 != nullptr)
    {
        return false;
    }
    else
    {
        return true;
    }   
}

//Problem4
void reverse(Node* &head){
    if (head == nullptr || head->next == nullptr)
    {
        return;
    }
    Node* prev = nullptr;
    Node* next = head;

    while (next != nullptr)
    {
        head = next->next;
        next->next = prev;
        prev = next;
        next = head;
    }
    head = prev; 
}

//Problem5
bool isPalindrome(Node* head){
    if (head->next == nullptr)
    {
        return true;
    }
    
    Node* s = head;
    Node* f = head;

    while (f != nullptr && f->next != nullptr)
    {
        s = s->next;
        f = f->next->next;
    }

    Node* curr = s;
    Node* prev = nullptr;
    Node* next = curr;

    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    f = prev;
    while (f)
    {
        if (f->value != head->value)
        {
            return false;
        }
        else
        {
            f = f->next;
            head = head->next;
        }
    }
    return true;
}

//Problem6
void rotate(Node* &head, int k){
    int length = 0;
    int counter = 1;
    bool flag = true;
    Node* tmp = head;

    for (Node* i = head; i != nullptr; i = i->next)
    {
        if (i->next->next == nullptr)
        {
            tmp = i->next;
            tmp->next = head;
            head = tmp;
            i->next = nullptr;
        } 
        length++;
    }
    length++;
    k = (k % length) - 1;

    Node* tmp2;
    while (flag)
    {
        if (head->next == nullptr)
        {
            head->next = tmp;
            head = tmp2;
            break;
        }
        
        if (counter == k)
        {
            tmp2 = head;
            head = head->next;
            tmp2->next = nullptr;
            tmp2 = head;
        }
        else
        {
            head = head->next;
        }
        counter++;
    }
}

//Problem7
Node* merge(Node* &head1, Node* &head2){
    Node* last = new Node(0);
    Node* min;
    Node* tmp1 = head1;
    Node* tmp2 = head2;
    Node* newHead;
    Node* tmp = last;
    bool flag = true;

    while (tmp1 && tmp2)
    {
        if ((tmp1->value) < (tmp2->value))
        {
            min = tmp1;
            last->next = min;
            last = min;
            tmp1 = tmp1->next;

            if (flag)
            {
                newHead = last;
                delete tmp;
                flag = false;
            }  
        }
        else
        {
            min = tmp2;
            last->next = min;
            last = min;
            tmp2 = tmp2->next;

            if (flag)
            {
                newHead = last;
                delete tmp;
                flag = false;
            } 
        }  
    }

    while (tmp1 == nullptr)
    {
        last->next = tmp2;
        last = last->next;
        tmp2 = tmp2->next;

        if (tmp2 == nullptr)
        {
            return newHead;
        }
    }
    
    while (tmp2 == nullptr)
    {
        last->next = tmp1;
        last = last->next;
        tmp1 = tmp1->next;

        if (tmp1 == nullptr)
        {
            return newHead;
        }
    }
    return newHead;
}

int main() {
    Node* node11 = new Node(1);
    Node* head1 = node11;
    Node* node12 = new Node(3);
    Node* node13 = new Node(5);
    Node* node14 = new Node(6);

    node11->next = node12;
    node12->next = node13;
    node13->next = node14;

    Node* node21 = new Node(2);
    Node* head2 = node21;
    Node* node22 = new Node(4);
    Node* node23 = new Node(7);

    node21->next = node22;
    node22->next = node23;

    traverseLinkedList(head1);
    traverseLinkedList(head2);
    Node* newHead = merge(head1, head2);
    traverseLinkedList(newHead);
    return 0;
}