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

void Search(Node* head, int x) {
    Node* temp = head;

    int idx = 0, ans = -1;
    while(temp != NULL) {
        if(temp->val == x) {
            ans = idx;
            break;
        }
        temp = temp->next; 
        idx++;
    }
    cout << ans << endl;
}


int main(){
    int t;
    cin >> t;

    while(t--) {
        Node* head = NULL;
        Node* tail = NULL;

        int val;
        while(true){
            cin >> val;
            if(val == -1) break;
            Insert_at_Tail(head, tail, val);
        }

        int x;
        cin >> x;
        Search(head, x);
    }

    return 0;
}