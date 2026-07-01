class Solution {
public:
    double findMaxAverage(vector<int>& A, int k) {
        int sum = 0;

        for (int i = 0; i < k; i++)
            sum += A[i];

        int S = sum;

        for (int i = k; i < A.size(); i++) {
            sum = sum - A[i - k] + A[i];
            S = max(S, sum);
        }

        return (double) S/ k;
    }
};
