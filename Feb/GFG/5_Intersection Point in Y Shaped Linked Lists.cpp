int intersectPoint(Node* head1, Node* head2)
    {
        // Your Code Here
        int len1=0,len2=0;
        Node* temp=head1;
        while(temp){
            len1++;
            temp=temp->next;
        }
        temp=head2;
        while(temp){
            len2++;
            temp=temp->next;
        }
        while(len2>len1){
            head2=head2->next;
            len2--;
        }
        while(len1>len2){
            head1=head1->next;
            len1--;
        }
        while(head1!=head2){
            head1=head1->next;
            head2=head2->next;
        }
        return head1->data;
    }
