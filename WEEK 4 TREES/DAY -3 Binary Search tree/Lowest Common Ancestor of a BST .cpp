class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* A, TreeNode* p, TreeNode* q) {
        while (A) {
            if (p->val < A->val && q->val < A->val)
                A = A->left;
            else if (p->val > A->val && q->val > A->val)
                A =A->right;
            else
                return A;
        }
        return NULL;
    }
};
