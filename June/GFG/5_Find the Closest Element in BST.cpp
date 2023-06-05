void help(Node *root,int &ans,int K){
	    if(!root)return;
	    ans=min(ans,abs(root->data-K));
	    if(root->data>K)help(root->left,ans,K);
	    else help(root->right,ans,K);
	}
  int minDiff(Node *root, int K)
  {
      //Your code here
      int ans=INT_MAX;
      help(root,ans,K);
      return ans;
  }
