class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* A) {
        vector<vector<int>> ans;
        if (!A) return ans;

        queue<TreeNode*> q;
        q.push(A);
        bool leftToRight = true;

        while (!q.empty()) {
            int n = q.size();
            vector<int> level(n);

            for (int i = 0; i < n; i++) {
                TreeNode* cur = q.front();
                q.pop();

                int idx = leftToRight ? i : n - 1 - i;
                level[idx] = cur->val;

                if (cur->left) q.push(cur->left);
                if (cur->right) q.push(cur->right);
            }

            leftToRight = !leftToRight;
            ans.push_back(level);
        }

        return ans;
    }
};
