#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void Insert_at_Tail(Node* &head, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    // right now temp is at last node

    // insert new node at the last position
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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    Insert_at_Tail(head, 40);
    Insert_at_Tail(head, 50);
    Insert_at_Tail(head, 60);

    Print_Linked_List(head);

    return 0;
}