class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> aa;

        for (int i = 0; i <= nums.size() - k; i++) {
            int maxi = nums[i];

            for (int j = i; j < i + k; j++) {
                maxi = max(maxi, nums[j]);
            }

            aa.push_back(maxi);
        }

        return aa;
    }
};
