class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left = 0, A = 0;

        for (int right = 0; right < s.size(); right++) {
            while (st.count(s[right])) {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);
            A= max(A, right - left + 1);
        }

        return A;
    }
};
