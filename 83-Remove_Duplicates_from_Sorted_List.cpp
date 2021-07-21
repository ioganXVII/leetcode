ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        ListNode* temp1 = head;
        ListNode* temp2 = head->next;
        while(temp2){
            if(temp1->val == temp2->val){
                temp1->next = temp2->next;
                temp2 = temp1->next;
            }
            else{
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
        return head;
    }
