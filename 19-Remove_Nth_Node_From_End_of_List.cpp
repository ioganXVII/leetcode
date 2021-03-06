ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = new ListNode();
        temp->next = head;
        
        ListNode* first = temp;
        ListNode* second = temp;
        
        for(int i = 1; i <= n + 1; i++) first = first->next;
        
        while(first){
            first = first->next;
            second = second->next;
        }
        
        second->next = second->next->next;
        
        return temp->next;
    }
