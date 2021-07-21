/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* first, ListNode* last){
        ListNode* prev = last;
        
        while(first != last){
            ListNode* temp = first->next;
            first->next = prev;
            prev = first;
            first = temp;
        }
        
        return prev;
    }
    
    
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        
        for(int i = 0; i < k; ++i){
            if(!temp) return head;
            temp = temp->next;
        }
            
        ListNode* new_head = reverse(head, temp);
        head->next = reverseKGroup(temp, k);
        
        
        
        return new_head; 
    }
};
