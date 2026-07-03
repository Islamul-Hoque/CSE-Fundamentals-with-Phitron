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

// insert node at tail
void Insert_at_Tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);

    // empty list case
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

// delete node at any
void Delete_At_Any_Pos(Node* &head, int idx){
    Node* temp = head;

    for (int i = 0; i <idx-1; i++) {
        temp = temp->next;
    }

    Node* deleteNode = temp->next;   
    temp->next = temp->next->next;

    delete deleteNode;
}


// print linked list
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

    // input until -1
    int val;
    while(true){
        cin >> val;
        if(val == -1) break;
        Insert_at_Tail(head, tail, val);
    }

    Delete_At_Any_Pos(head, 2);
    Print_Linked_List(head);

    return 0;
}