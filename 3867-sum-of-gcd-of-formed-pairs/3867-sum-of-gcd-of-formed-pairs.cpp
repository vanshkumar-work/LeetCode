class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int mx = INT_MIN ;
        long long n = nums.size() ;
        vector<int> ans(n,0) ;
        for(int i = 0 ; i<nums.size() ; i++){
            mx = max(mx,nums[i]) ;
            ans[i]= gcd(nums[i],mx) ;
        }
        sort(ans.begin(),ans.end());
        long long left = 0 ; 
        long long right = n-1 ;
        long long sum = 0 ;
        while(left<right){
            sum+= gcd(ans[left],ans[right]) ;
            left++ ;
            right-- ;
        }
        return sum ;
    }
};