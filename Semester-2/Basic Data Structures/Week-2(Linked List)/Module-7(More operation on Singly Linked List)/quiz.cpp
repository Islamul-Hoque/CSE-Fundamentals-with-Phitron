// Q-1: What is the time complexity of insert at any position in a singly linked list?
// Ans: O(N)



// Q-2: What is the time complexity of insert at head in a singly linked list?
// Ans: O(1)



// Q-3: What is the time complexity of insert at tail in a singly linked list? We have only one pointer(head) for tracking.
// Ans: O(N)



// Q-4: What is the time complexity of insert at tail in a singly linked list? We have two pointers(head and tail) for tracking.
// Ans: O(1)



// Q-5: What is the time complexity of delete head in a singly linked list??
// Ans: O(1)



// Q-6: What is the time complexity of delete at tail in a singly linked list? We have two pointers(head and tail) for tracking.
// Ans: O(N)



// Q-7: Which is better to use if we always want to delete from tail?
// Ans: Array



// Q-8: What will the following code snippet do?
// Ans: Delete a node from any position

Node *tmp = head; // head থেকে শুরু

for (int i = 1; i <= pos - 1; i++) // pos-1 বার এগিয়ে যাও
    tmp = tmp->next;               // এখন tmp = pos এর আগের node

Node *deleteNode = tmp->next; // যে node delete করব সেটা ধরো
tmp->next = tmp->next->next;  // সেই node কে bypass করো
delete deleteNode;            // memory free করো


// Q-9: What is the time complexity of sorting a singly linked list using selection sort?
// Ans: O(NN)



// Q-10: What will the following code snippet do?
// Ans: Delete the head node

Node *deleteNode = head;
head = head->next;
delete deleteNode;