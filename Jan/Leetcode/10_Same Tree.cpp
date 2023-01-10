class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // If both are NULL
        if(p == NULL && q == NULL){
            return true;
        }
        // If one is NULL and other is not NULL
        // If both NULL (above will return true);
        if(p == NULL || q == NULL){
            return false;
        }
        // Comparing values.
        if(p->val != q->val){
            return false;
        }
        // Go to left and right subtree.
        return(isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }
};
