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

void Insert_at_Tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void Delete_At_Head(Node* &head){
    Node* deleteNode = head;
    head = head->next;

    delete deleteNode;
}

void Print_Linked_List(Node* head){
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true){
        cin >> val;

        if(val == -1) break;
        Insert_at_Tail(head, tail, val);
    }

    Delete_At_Head(head);
    Print_Linked_List(head);

    return 0;
}
