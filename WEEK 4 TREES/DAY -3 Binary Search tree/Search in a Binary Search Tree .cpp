class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int A) {
        while (root != NULL) {
            if (root->val ==A)
                return root;
            else if (A < root->val)
                root = root->left;
            else
                root = root->right;
        }
        return NULL;
    }
};
