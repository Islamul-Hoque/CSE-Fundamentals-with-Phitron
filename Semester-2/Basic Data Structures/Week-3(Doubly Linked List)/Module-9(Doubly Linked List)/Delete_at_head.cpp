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

// Forward
void Print_Forward(Node* head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void Delete_at_head(Node* &head, Node* tail){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;

    if(head == NULL){
        tail = NULL; 
        return;
    }

    head->prev = NULL;
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

    Delete_at_head(head, tail);
    Delete_at_head(head, tail);
    // Delete_at_head(head, tail);
    Print_Forward(head);

    return 0;
}