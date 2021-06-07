ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum_ls = 0;
        
        ListNode result(0);
        ListNode* res_node = &result;
        while(sum_ls || l1 || l2){
            sum_ls += (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
            res_node->next = new ListNode(sum_ls%10);
            res_node = res_node->next;
            sum_ls/=10;
            
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }

        return result.next;
    }
