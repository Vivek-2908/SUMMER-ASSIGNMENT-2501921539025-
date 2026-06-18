class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxA = 0;

        for (int i = 0; i < n; i++) {
            int minH = heights[i];

            for (int j = i; j < n; j++) {
                minH = min(minH, heights[j]);
                int area = minH * (j - i + 1);
                maxA = max(maxA, area);
            }
        }

        return maxA;
    }
};
