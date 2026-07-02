#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

    // constructor to initialize node value and next pointer
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

// function to insert a new node at the tail of the linked list
void Insert_at_Tail(Node* &head, int val){
    Node* newNode = new Node(val);

    // handle empty list case: new node becomes head
    if(head == NULL){
        head = newNode;
        return;
    }

    // traverse to the last node
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    // insert new node at the last position
    temp->next = newNode;
}

// function to print all nodes of the linked list
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
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    // insert new nodes at the tail
    Insert_at_Tail(head, 40);
    Insert_at_Tail(head, 50);
    Insert_at_Tail(head, 60);

    // print the linked list
    Print_Linked_List(head);

    return 0;
}
