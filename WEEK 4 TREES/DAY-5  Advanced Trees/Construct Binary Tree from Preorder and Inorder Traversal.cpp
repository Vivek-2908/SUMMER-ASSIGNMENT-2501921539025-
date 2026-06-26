class Solution {
public:
    int i = 0;

    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int l, int r) {
        if (l > r)
            return NULL;

        TreeNode* root = new TreeNode(preorder[i]);
        i++;

        int k = l;
        while (inorder[k] != root->val)
            k++;

        root->left = solve(preorder, inorder, l, k - 1);
        root->right = solve(preorder, inorder, k + 1, r);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return solve(preorder, inorder, 0, inorder.size() - 1);
    }
};
