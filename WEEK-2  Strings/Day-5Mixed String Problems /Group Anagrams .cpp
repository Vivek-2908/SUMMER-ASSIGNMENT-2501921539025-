class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& A) {
        unordered_map<string, vector<string>> mp;

        for (string s : A) {
            string temp = s;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(s);
        }

        vector<vector<string>> S;

        for (auto it : mp) {
            S.push_back(it.second);
        }

        return S;
    }
};
