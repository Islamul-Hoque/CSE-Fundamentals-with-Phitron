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

// delete node at tail
void Delete_At_Tail(Node* &head, Node* &tail, int idx){
    Node* temp = head;

    // move to node before target
    for (int i = 0; i < idx - 1; i++) {
        temp = temp->next;
    }

    // target node
    Node* deleteNode = temp->next;   

    // bypass target
    temp->next = temp->next->next;

    // free target
    delete deleteNode;
    tail =temp;
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

    cout << "Tail before deletion: " << tail->val << endl;

    Delete_At_Tail(head, tail, 3);
    Print_Linked_List(head);

    cout << "Tail after deletion: " << tail->val << endl;

    return 0;
}