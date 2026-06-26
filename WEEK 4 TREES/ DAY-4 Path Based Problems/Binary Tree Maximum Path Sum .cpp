class Solution {
public:
    int maxi = INT_MIN;

    int solve(TreeNode* root) {
        if (root == NULL)
            return 0;

        int A = solve(root->left);
        int B = solve(root->right);

        if (A < 0)
            A= 0;
        if (B< 0)
            B = 0;

        maxi = max(maxi, A + B + root->val);

        return root->val + max(A, B);
    }

    int maxPathSum(TreeNode* root) {
        solve(root);
        return maxi;
    }
};
