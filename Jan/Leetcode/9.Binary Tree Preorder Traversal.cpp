class Solution {
  void traverse(TreeNode* root, vector<int>& v) {
        if (root==NULL) return;     // if node is null there is nothing more to check
        v.push_back(root->val);     // We first add the node we're visiting to the output vector
        traverse(root->left, v);    // Now let's move through the left siblings
        traverse(root->right, v);   // After the left siblings are done with, we check for the right siblings as we start going back
    }

public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        traverse(root, v);
        return v;
    }
};
