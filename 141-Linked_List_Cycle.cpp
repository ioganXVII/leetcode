bool hasCycle(ListNode *head) {
        if(!head || head->next == NULL) return false;
        
        ListNode* first = head;
        ListNode* second = head->next->next;
        
        while(first && second && second->next){
            first = first->next;
            second = second->next->next;
            
            if(first == second) return true; 
        }

        return false;
    }
