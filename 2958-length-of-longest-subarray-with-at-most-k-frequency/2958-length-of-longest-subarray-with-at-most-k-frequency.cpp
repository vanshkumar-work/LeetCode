class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp ;
        int l = 0 ;
        int r = 0 ;
        int n =  nums.size();
        int ans = INT_MIN ;
        while(r<n){
            int  p = nums[r];
            mp[p]++ ;
            while(mp[p]>k){
                mp[nums[l]]-- ;
                l++ ;
            }
            ans = max(ans, r-l+1);
            r++;

        }
        return ans ;
    }
};