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

void Compare_Linked_List(Node* head, Node* head2){
    Node* temp = head;
    Node* temp2 = head2;

    int flag = 1;

    while (temp != NULL && temp2 != NULL) {
        if(temp->val != temp2->val ) {
            flag = 0; 
            break;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }

    if(temp != NULL || temp2 != NULL) flag = 0;

    if(flag == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
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

    Node* head2 = NULL;
    Node* tail2 = NULL;
    int val2;

    while(true){
        cin >> val2;

        if(val2 == -1) break;
        Insert_at_Tail(head2, tail2, val2);
    }

    Compare_Linked_List(head, head2);

    return 0;
}