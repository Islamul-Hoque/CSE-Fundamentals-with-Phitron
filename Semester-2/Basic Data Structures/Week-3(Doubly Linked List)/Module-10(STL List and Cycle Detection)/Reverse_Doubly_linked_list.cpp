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

// Forward printing 
void Print_Forward(Node* head){
    Node* temp = head;

    while (temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void Insert_at_Tail_Input(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);

    // Head NULL Check 
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->prev = tail;
    tail->next = newNode;

    tail = newNode;
}

void Reverse_Doubly(Node* head, Node* tail){
    for(Node *i=head, *j=tail; i!=j && i->prev != j; i=i->next, j=j->prev ){
        swap(i->val, j->val);
    }
}

int main(){
    // NULL 
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(1){
        cin >> val;
        if(val == -1) break;
        Insert_at_Tail_Input(head, tail, val);
    }

    cout << "Original List: ";
    Print_Forward(head);

    Reverse_Doubly(head, tail);

    cout << "After Reverse: ";
    Print_Forward(head);

    cout << "Head after reverse: " << head->val << endl;
    cout << "Tail after reverse: " << tail->val << endl;
    return 0;
}