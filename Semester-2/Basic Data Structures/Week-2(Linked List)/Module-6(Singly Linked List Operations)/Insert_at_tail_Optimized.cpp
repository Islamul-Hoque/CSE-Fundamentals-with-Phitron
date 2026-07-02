#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

    // constructor 
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

// insert a new node at the tail using tail pointer reference
void Insert_at_Tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);

    // handle empty list case
    if(head == NULL){
        head = newNode;
        return;
    }

    // link new node after current tail and update tail
    tail->next = newNode;
    tail = newNode;
}

// print all nodes of the linked list
void Print_Linked_List(Node* head){
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main(){
    // create initial linked list with 3 nodes
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->next = tail;

    // insert new nodes at the tail
    Insert_at_Tail(head, tail, 400);
    Insert_at_Tail(head, tail, 500);
    Insert_at_Tail(head, tail, 600);

    // print the linked list
    Print_Linked_List(head);

    // print the current tail value
    cout << "Tail: " << tail->val << endl;

    return 0;
}
