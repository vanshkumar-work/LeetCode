class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {

        int n = nums.size();

        vector<vector<long long>> dp(n, vector<long long>(k, 0));

        vector<long long> ans(k, 0);

        // First element
        dp[0][nums[0] % k] = 1;

        for (int r = 0; r < k; r++) {
            ans[r] += dp[0][r];
        }

        // Remaining elements
        for (int i = 1; i < n; i++) {

            int rem = nums[i] % k;

            // Start a new subarray [nums[i]]
            dp[i][rem]++;

            // Extend subarrays ending at i-1
            for (int r = 0; r < k; r++) {

                int newRem = (r * rem) % k;

                dp[i][newRem] += dp[i - 1][r];
            }

            // Add this row to answer
            for (int r = 0; r < k; r++) {
                ans[r] += dp[i][r];
            }
        }

        return ans;
    }
};