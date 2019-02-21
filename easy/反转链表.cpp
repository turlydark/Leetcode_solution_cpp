/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       
        if(head==NULL) return NULL;  
        if(head -> next==NULL) return head;  
          
        ListNode *p = head -> next;  
        ListNode *n = reverseList(p);  
          
        head -> next = NULL;  
        p -> next = head;  
        return n;  
    
    }
};
