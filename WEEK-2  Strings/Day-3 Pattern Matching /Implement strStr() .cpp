class Solution {
public:
    int strStr(string A, string B) {
        int n = A.size();
        int m = B.size();

        for (int i = 0; i <= n - m; i++) {
            int j = 0;

            while (j < m && A [i + j] == B[j]) {
                j++;
            }

            if (j == m)
                return i;
        }

        return -1;
    }
};
