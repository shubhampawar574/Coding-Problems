void help(Node* root,int khapadihai,long long int &ans){
        if(!root)return;
        if(khapadihai==0)ans+=root->data;
        help(root->left,khapadihai-1,ans);
        help(root->right,khapadihai+1,ans);
    }
void getTarget(Node* root,int target,Node* &temp){
    if(!root)return;
    if(root->data==target)temp=root;
    if(root->data<target)getTarget(root->right,target,temp);
    else getTarget(root->left,target,temp);
}
long long int verticallyDownBST(Node *root,int target){
    // Code here
    Node *temp=NULL;
    getTarget(root,target,temp);
    if(!temp)return -1;
    long long int ans=0;
    help(temp,0,ans);
    ans-=target;
    return ans;
}
