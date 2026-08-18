class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector<int>go(51,0) ;
        for(int i = 0;  i<nums.size() ; i++){
            go[nums[i]]
             ++;
        }
        int ans = -1 ;
        int n = nums.size() ;
        for(int i = 0 ; i<n  ; i++){
            if(k==n || (go[nums[i]]==1 && (k==1 || i==0 || i==n-1))){
                ans = max(ans,nums[i]); 
            }
        }
        return ans ;
    }
};