class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        long long sum = 0;
        for (int num : nums) {
            sum += num;
        }
        long long target = sum - x;
        if (target < 0)
            return -1;
        if (target == 0)
            return n;
        int left = 0;
        long long curr = 0;
        int longest = -1;
        for (int right = 0; right < n; right++) {
            curr += nums[right];
            while (curr > target) {
                curr -= nums[left];
                left++;
            }
            if (curr == target) {
                longest = max(longest, right - left + 1);
            }
        }
        return longest == -1 ? -1 : n - longest;
    }
};