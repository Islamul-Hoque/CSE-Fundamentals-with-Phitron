#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

    // node constructor
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

// insert at tail
void Insert_at_Tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);

    // empty list
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    // link new node after tail
    tail->next = newNode;

    // update tail pointer
    tail = newNode;
}


// delete at tail
void Delete_At_Tail(Node* &head, Node* &tail, int idx){
    Node* temp = head;

    // move before target
    for (int i = 0; i < idx - 1; i++) {
        temp = temp->next;
    }

    // target node
    Node* deleteNode = temp->next;   

    // bypass target
    temp->next = temp->next->next;

    // free + update tail
    delete deleteNode;
    tail = temp;
}

// print list
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

    // tail before deletion
    cout << "Tail before deletion: " << tail->val << endl;

    // delete tail node
    Delete_At_Tail(head, tail, 3);

    // print after deletion
    Print_Linked_List(head);

    // tail after deletion
    cout << "Tail after deletion: " << tail->val << endl;

    return 0;
}