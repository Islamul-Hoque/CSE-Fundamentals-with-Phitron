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

void Insert_At_Tail(Node* &head, Node* &tail, int val){
    Node* newHead = new Node(val);

    if(head == NULL){
        head = newHead;
        tail = newHead;
    }

    tail->next = newHead;
    tail = newHead;
}

void Print_reverse(Node* head){
    Node* temp = head;

    if(temp == NULL) return;

    Print_reverse(temp->next);
    cout << temp->val << endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    while (true) {
        int val;
        cin >> val;

        if(val == -1) break;
        Insert_At_Tail(head, tail, val);
    }

    Print_reverse(head);

    return 0;
}