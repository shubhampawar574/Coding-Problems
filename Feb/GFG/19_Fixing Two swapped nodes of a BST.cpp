void inorder(Node* root,Node *&pehli,Node *&dusri,Node *&pichli){
            if(!root)return ;
            inorder(root->left,pehli,dusri,pichli);
            if(pichli and root->data<pichli->data){
                if(!pehli)pehli=pichli;
                dusri=root;
            }
            pichli=root;
            inorder(root->right,pehli,dusri,pichli);
        }
    struct Node *correctBST(struct Node *root) {
        // code here
        Node *pehli=NULL,*dusri=NULL,*pichli=NULL;
        inorder(root,pehli,dusri,pichli);
        swap(pehli->data,dusri->data);
        return root;
    }
