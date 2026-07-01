class Solution {
public:
    vector<int> twoSum(vector<int>& A, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < A.size(); i++) {
            int need = target - A[i];

            if (mp.count(need))
                return {mp[need], i};

            mp[A[i]] = i;
        }

        return {};
    }
};
