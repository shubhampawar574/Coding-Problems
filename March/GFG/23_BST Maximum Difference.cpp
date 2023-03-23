void help(Node* root,int target,int a,int b,int &ans,bool mila){
        if(!root)return;
        if(root->data==target)mila=true;
        if(mila){
            b+=root->data;
            help(root->left,target,a,b,ans,mila);
            help(root->right,target,a,b,ans,mila);
            if(!root->left and !root->right){
                b-=target;
                ans=max(ans,a-b);
            }
        }
        else{
            a+=root->data;
            if(target<root->data)help(root->left,target,a,b,ans,mila);
            else help(root->right,target,a,b,ans,mila);
        }
    }
    int maxDifferenceBST(Node *root,int target){
        // Code here
        int a=0,b=0,ans=INT_MIN;
        bool mila=false;
        help(root,target,a,b,ans,mila);
        if(ans==INT_MIN)return -1;
        return ans;
    }
