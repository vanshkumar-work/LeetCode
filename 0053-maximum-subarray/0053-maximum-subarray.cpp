class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum = nums[0];
        int maxsum = nums[0];
        for (int i =1 ; i<nums.size() ; i++){
            if(nums[i]>nums[i] + currsum){
                currsum = nums[i];
            }
            else{
                currsum += nums[i];
            }
            if(currsum>maxsum){
                maxsum = currsum ;
            }   
        }
        return maxsum;
    }
};