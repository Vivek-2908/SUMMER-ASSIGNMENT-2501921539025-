class Solution {
public:
    string reverseWords(string s) {
        int start = 0;

        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                int A = start;
                int B = i - 1;

                while (A < B) {
                    swap(s[A], s[B]);
                    A++;
                    B--;
                }

                start = i + 1;
            }
        }

        return s;
    }
};
