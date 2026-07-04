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

void Remove_Duplicate(Node* head) {
    Node* current = head;

    while(current != NULL) {

        Node* temp = current;
        while(temp->next != NULL) {

            if(temp->next->val == current->val) {
                Node* deleteNode = temp->next;
                temp->next = temp->next->next;
                delete deleteNode;

            } else {
                temp = temp->next;
            }
        }
        current = current->next;
    }
}

void Print_Linked_List(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
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

    Remove_Duplicate(head);
    Print_Linked_List(head);

    return 0;
}


/*

Question Analysis : 
আমাকে একটা singly linked list ইনপুট নিতে হবে। এই লিস্ট থেকে duplicate value গুলাকে ডিলিট করে List টা Print করতে হবে। List এ কোন duplicate value পাওয়া না গেলে ইনপুট নেওয়া List টা Print করে দিব।

Observation : 
N এবং Vএর constants অনুযায়ী  variable এর data type নিতে হবে। 
singly linked list এর value গুলা ইনপুট নিতে নিতে লাস্টে -1 পেলে ইনপুট থামিয়ে দিব। 

Testcase Analysis :
1 2 4 2 3 5 1 4 5 2 6 1 -1

এই Testcase এ,
1, 2, 4, 5 এই 4টা value ডুপ্লিকেট আছে।
এই ডুপ্লিকেট value ডিলিট করার জন্য 2টা pointer অর্থাৎ Outer pointer এবং Inner pointer নিতে হবে।

Outer pointer (current), প্রতিটি node কে ধরবে। এবং Inner pointer (temp) এর কাজ হলো current node এর পরের অংশে গিয়ে duplicate খুঁজে বের করা।

যখনই duplicate পাওয়া যাবে, inner pointer সেই node কে delete করে দিবে।

এভাবে প্রতিটি node এর duplicate ডিলিট  করার পর লিস্টে শুধু unique মানগুলো থেকে যাবে।

এই singly linked list এর duplicate value গুলোকে ডিলিট পরার পর এটিকে print করলে output আসবে: 
1 2 4 3 5 6

*/