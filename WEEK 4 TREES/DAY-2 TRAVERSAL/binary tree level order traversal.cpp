class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* A) {
        vector<vector<int>> ans;
        if (!A) return ans;

        queue<TreeNode*> q;
        q.push(A);

        while (!q.empty()) {
            int n = q.size();
            vector<int> level;

            while (n--) {
                TreeNode* cur = q.front();
                q.pop();

                level.push_back(cur->val);

                if (cur->left) q.push(cur->left);
                if (cur->right) q.push(cur->right);
            }

            ans.push_back(level);
        }

        return ans;
    }
};
