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

// insert 
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

// selection sort
void Sort_Linked_List(Node* head){
    for (Node* i = head; i->next != NULL; i = i->next) {
        for (Node* j = i->next; j != NULL; j = j->next) {

            // Ascending
            if(i->val > j->val) 
                swap(i->val, j->val);
        }
    }
}


// print 
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

    Sort_Linked_List(head);
    Print_Linked_List(head);

    return 0;
}