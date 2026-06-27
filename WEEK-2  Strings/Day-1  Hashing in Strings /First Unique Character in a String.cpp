class Solution {
public:
    int firstUniqChar(string s) {
        int count[26] = {0};

        for (char ch : s) {
            count[ch - 'a']++;
        }

        for (int A = 0; A < s.size(); A++) {
            if (count[s[A] - 'a'] == 1) {
                return A;
            }
        }

        return -1;
    }
};
