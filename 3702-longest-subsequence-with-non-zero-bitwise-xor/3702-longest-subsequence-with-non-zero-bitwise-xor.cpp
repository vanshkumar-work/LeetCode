class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int l = 0 ; 
        int ans = 0 ;
        for(int i =0 ;  i<nums.size();  i++){
            ans = ans^nums[i] ;
        }
        int len = nums.size();
        if(ans!=0) return len ; 
        for(int x : nums){
            if (x!=0){
                return len-1 ;
            }
        }

        return 0 ;
    }
};