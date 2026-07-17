// Problem Name: Middle of the linked list
// Link: https://leetcode.com/problems/middle-of-the-linked-list

class Solution {
public:
    int size(ListNode* head){
        ListNode* temp = head;
        int count = 0;
    
        while(temp !=NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }

    ListNode* middleNode(ListNode* head) {
        int sz = size(head)/2;
        ListNode* temp = head;

        for(int i = 1; i<=sz; i++){
            temp = temp->next;
        }    
        return temp;
    }
};