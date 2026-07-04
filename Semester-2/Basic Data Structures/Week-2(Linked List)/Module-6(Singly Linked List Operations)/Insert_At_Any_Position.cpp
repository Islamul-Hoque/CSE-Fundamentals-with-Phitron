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

// insert a new node at a given position (index starts from 0)
void Insert_at_any_position(Node* head, int idx, int val){
    Node* newNode = new Node(val);
    Node* temp = head;

    // traverse to the node just before the target position
    for (int i = 0; i < idx - 1; i++){
        temp = temp->next;
    }
    // temp now points to (idx-1)th node

    // link new node into the list
    newNode->next = temp->next;
    temp->next = newNode;
}

// print all nodes 
void Print_Linked_List(Node* head){
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main(){
    // create initial linked list 
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    // insert new nodes at specific positions
    Insert_at_any_position(head, 2, 100);
    Insert_at_any_position(head, 3, 50);
    Insert_at_any_position(head, 2, 60);

    // print the linked list after insertions
    Print_Linked_List(head);

    return 0;
}
