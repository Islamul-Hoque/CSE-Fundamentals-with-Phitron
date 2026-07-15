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

void print_linked_list(Node* head){
    Node* tmp = head;

    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

void Insert_At_Tail(Node* &head, Node* &tail, int val){
    Node* newHead = new Node(val);

    if(head == NULL){
        head = newHead;
        tail = newHead;
        return;
    }

    tail->next = newHead;
    tail = newHead;
}

void Reverse_Linked_List(Node* &head, Node* &tail, Node* temp){
    if (head == NULL || temp == NULL) return;

    if(temp->next == NULL){
        head = temp;
        return;
    }

    Reverse_Linked_List(head, tail, temp->next);
    // Reverse list
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
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

    Reverse_Linked_List(head, tail, head);
    print_linked_list(head);

    cout << "Head: " << head->val<< endl;
    cout << "Tail: " << tail->val<< endl;
    return 0;
}