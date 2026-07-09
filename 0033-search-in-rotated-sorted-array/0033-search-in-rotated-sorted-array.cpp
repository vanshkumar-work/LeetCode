class Solution {
public:
    int search(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            // target found
            if (nums[mid] == target)
                return mid;

            // LEFT HALF SORTED
            if (nums[left] <= nums[mid]) {

                // target lies inside left half
                if (target >= nums[left] &&
                    target < nums[mid]) {

                    right = mid - 1;
                }
                else {
                    left = mid + 1;
                }
            }

            // RIGHT HALF SORTED
            else {

                // target lies inside right half
                if (target > nums[mid] &&
                    target <= nums[right]) {

                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
        }

        return -1;
    }
};