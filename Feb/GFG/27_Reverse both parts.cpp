Node *reverse(Node *head, int k)
    {
        // code here
        // code here
        Node *curr=head,*prev=NULL,*agli;
        int node=0;
        while(curr){
            node++;
            agli = curr->next;
            curr->next = prev;
            prev = curr;
            curr=agli;
        }
        node=node-k-1;
        Node *temp = prev;
        while(node--){
            temp=temp->next;
        }
        head->next=prev;
        head=temp->next;
        temp->next=NULL;
        return head;
    }
