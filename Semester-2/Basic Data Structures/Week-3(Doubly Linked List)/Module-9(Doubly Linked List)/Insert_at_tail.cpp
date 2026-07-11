#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node* prev;

        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};

void Insert_at_Tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);

    // Head NULL Check 
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->prev = tail;
    tail->next = newNode;

    tail = newNode;
}

// Forward printing 
void Print_Forward(Node* head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    // NULL 
    // Node* head = NULL;
    // Node* tail = NULL;

    Insert_at_Tail(head, tail, 100);
    Insert_at_Tail(head, tail, 200);
    Insert_at_Tail(head, tail, 300);

    Print_Forward(head);

    return 0;
}

