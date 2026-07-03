// Q-1: What will be the output of the following code?
// Ans: 20

#include <bits/stdc++.h>
using namespace std;

void fun(int *p){
    *p = 20;   // pointer dereference করে value পরিবর্তন করছে
}

int main(){
    int val = 10;       // শুরুতে val = 10
    int *ptr = &val;    // ptr val এর address ধরে আছে
    fun(ptr);           // fun এ ptr পাঠানো হলো → *p = 20
    cout << *ptr << endl; // এখন val = 20, তাই output হবে 20
    return 0;
}


// Q-2: What will be the output of the following code?
// Ans: 10

#include <bits/stdc++.h>
using namespace std;

void fun(int *p){
    p = NULL;   // শুধু local pointer p কে NULL করছে
}

int main(){
    int val = 10;
    int *ptr = &val;    // ptr val এর address ধরে আছে
    fun(ptr);           // fun এ ptr পাঠানো হলো
    cout << *ptr << endl;
    return 0;
}


// Q-3: What will be the output of the following code?
// Ans: 0

#include <bits/stdc++.h>
using namespace std;

void fun(int *&p){   // pointer reference হিসেবে পাঠানো হয়েছে
    p = NULL;        // আসল pointer ptr এখন NULL হয়ে যাবে
}

int main() {
    int val = 10;
    int *ptr = &val;   // ptr val এর address ধরে আছে
    fun(ptr);          // fun এ ptr reference পাঠানো হলো → p = NULL
    cout << ptr << endl; // ptr এখন NULL → print করবে 0
    return 0;
}


// Q-4: What will the following code snippet do?
// Ans: Insert a node only at tail

Node *tmp = head;
while (tmp->next != NULL) {
    tmp = tmp->next;
}
tmp->next = newNode;


// Q-5: What will the following code snippet do?
// Ans: Insert a node only at head

newNode->next = head;
head = newNode;


// Q-6: What will the following code snippet do?
// Ans: "Insert a node at any position

Node *tmp = head;
for (int i = 1; i <= pos - 1; i++) {
    tmp = tmp->next;
}
newNode->next = tmp->next;
tmp->next = newNode;



// Q-7: What is the time complexity of inserting an element at any position in a singly linkedlist?
// Ans: O(N)


// Q-8: What is the time complexity of inserting an element at tail in a singly linkedlist? (Without tail track)
// Ans: O(N)



// Q-9: What is the time complexity of traversing a singly linkedlist?
// Ans: O(N)

// Q-10: What is the time complexity of inserting an element at head in a singly linkedlist?
// Ans: O(1)