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

void Insert_at_any_pos(Node* &head, int idx, int val){
    Node* newNode = new Node(val);

    // NULL Check
    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    for(int i=1; i<idx; i++){
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;

    temp->next = newNode;
    newNode->prev = temp;
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    // NULL Check
    // Node* head = NULL;
    // Node* tail = NULL;

    Insert_at_any_pos(head, 2, 100);
    Insert_at_any_pos(head, 1, 200);
    Insert_at_any_pos(head, 3, 300);
    Print_Forward(head);

    return 0;
}