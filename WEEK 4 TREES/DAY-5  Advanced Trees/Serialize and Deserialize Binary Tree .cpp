class Codec {
public:
    string serialize(TreeNode* root) {
        if (root == NULL)
            return "# ";

        return to_string(root->val) + " " +
               serialize(root->left) +
               serialize(root->right);
    }

    TreeNode* solve(stringstream &ss) {
        string s;
        ss >> s;

        if (s == "#")
            return NULL;

        TreeNode* root = new TreeNode(stoi(s));

        root->left = solve(ss);
        root->right = solve(ss);

        return root;
    }

    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return solve(ss);
    }
};
