// #include <bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//         int val;
//         Node* next;

//     Node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void Insert_at_head(Node* &head, Node* &tail, int val){
//     Node* newNode = new Node(val);

//     if(head == NULL){
//         head = newNode;
//         tail = newNode;
//         return;
//     }

//     newNode->next = head;
//     head = newNode;
// }

// void Insert_at_Tail(Node* &head, Node* &tail, int val){
//     Node* newNode = new Node(val);

//     if(head == NULL){
//         head = newNode;
//         tail = newNode;
//         return;
//     }

//     tail->next = newNode;
//     tail = newNode;
// }

// void Delete_At_Any_Pos(Node* &head, Node* &tail, int idx){
//     if(head == NULL) return;

//     if(idx == 0){
//         Node* deleteNode = head;

//         head = head->next;
//         if(head == NULL) {
//             tail = NULL; 
//         }
//         delete deleteNode;
//         return;
//     }

//     Node* temp = head;
//     for(int i = 1; temp != NULL && i < idx; i++){
//         temp = temp->next;
//     }

//     if(temp == NULL || temp->next == NULL) return;

//     Node* deleteNode = temp->next;
//     temp->next = temp->next->next;

//     if(temp->next == NULL) {
//         tail = temp; 
//     }
//     delete deleteNode;
// }


// void Print_Linked_List(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     int q;
//     cin >> q;

//     Node* head = NULL;
//     Node* tail = NULL;

//     while(q--) {
//         int x, v;
//         cin >> x >> v;

//         if(x == 0) Insert_at_head(head, tail, v);
//         else if(x == 1) Insert_at_Tail(head, tail, v);
//         else if(x == 2) Delete_At_Any_Pos(head, tail, v);

//         Print_Linked_List(head);
//     }

//     return 0;
// }