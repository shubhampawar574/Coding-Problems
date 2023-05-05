unordered_map<int,int> help(Node* root,int k,int &ans){
    unordered_map<int,int> mm,mm2,mm3;
    if(root->left)
    mm2=help(root->left,k,ans);
    if(root->right)
    mm3=help(root->right,k,ans);
    if(mm2.size()>k)return mm2;
    if(mm3.size()>k)return mm3;
    mm[root->data]++;
    for(auto x:mm2)mm[x.first]+=x.second;
    for(auto x:mm3)mm[x.first]+=x.second;
    if(mm.size()<=k)ans++;
    return mm;
}
int goodSubtrees(Node *root,int k){
    // Code here
    int ans=0;
    help(root,k,ans);
    return ans;
}
