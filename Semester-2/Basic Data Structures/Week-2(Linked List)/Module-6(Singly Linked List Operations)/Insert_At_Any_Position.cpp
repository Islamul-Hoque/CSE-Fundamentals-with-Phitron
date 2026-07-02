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

// function to insert a new node at any position
void Insert_at_any_position(Node* head, int idx, int val){
    Node* newNode = new Node(val);
    Node* temp = head;

    for (int i = 0; i <idx-1; i++){
        temp = temp->next;
    }
    // temp at: idx-1

    newNode->next =temp->next;
    temp->next = newNode;
}

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

    // insert new nodes at any position
    Insert_at_any_position(head, 2, 100);
    Insert_at_any_position(head, 3, 50);
    Insert_at_any_position(head, 2, 60);

    // print the linked list
    Print_Linked_List(head);

    return 0;
}
