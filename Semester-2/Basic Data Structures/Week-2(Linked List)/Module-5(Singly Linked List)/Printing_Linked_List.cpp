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

int main(){
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);


    head->next = a;
    a->next = b;
    b->next = c;

    // Way-1
    cout << head->val << endl;
    cout << head->next->val << endl;
    cout << head->next->next->val << endl;

    cout << "---------------" << endl;

    Node *temp = head;
    // Way-2
    while (temp != NULL) {
        cout << temp->val << endl;
        temp = temp->next;
    }

    cout << "---------------" << endl; 

    temp = head;
    while (temp != NULL) {
        cout << temp->val << endl;
        temp = temp->next;
    }


    return 0;
}