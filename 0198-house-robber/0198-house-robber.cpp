class Solution {
public:
vector<int>dp ;
int cost(int i , vector<int>& nums){
    if(i>=nums.size()){
        return 0 ;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int rob =  nums[i] + cost(i+2,nums) ;
    int skip = cost(i+1,nums) ;
    return dp[i] =max(skip,rob) ;
}
    int rob(vector<int>& nums) {
        dp.assign(nums.size(),-1) ;
        return cost(0,nums) ;
    }
};