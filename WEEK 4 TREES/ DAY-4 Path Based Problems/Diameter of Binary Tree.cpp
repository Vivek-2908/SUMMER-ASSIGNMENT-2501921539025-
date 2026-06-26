class Solution {
public:
    int diameter = 0;

    int height(TreeNode* root) {
        if (root == NULL)
            return 0;

        int A = height(root->left);
        int B = height(root->right);

        diameter = max(diameter, A+B);

        return 1 + max(A, B);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
    }
};
