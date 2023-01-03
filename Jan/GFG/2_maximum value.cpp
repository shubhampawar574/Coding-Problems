class Solution {
  public:
    vector<int> maximumValue(Node* node) {
        //code here
        queue<Node*> q;
        vector<int> ans;
        
        q.push(node);
        while(!q.empty()){
            int n=q.size();
            int maxi=0;
            while(n--){
                Node* temp=q.front();
                maxi=max(maxi, temp->data);
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            ans.push_back(maxi);
        }
        
        return ans;
    }
};
