int findFirstNode(Node* head)
    {
        
        Node*slow=head;
        Node*fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow) break;
        }
        if(fast!=slow) 
            return -1;
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
       return slow->data;
    }
