int getNthFromLast(Node *head, int n)
    {
           // Your code here
           Node* first=head,*second=head;
           int c=0;
           while(first){
               first=first->next;
               c++;
               if(c>n){
                   second=second->next;
               }
           }
           if(c<n)return -1;
           return second->data;
    }
