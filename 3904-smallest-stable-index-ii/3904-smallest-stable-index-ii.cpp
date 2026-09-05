class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n =  nums.size() ;
        int maxi = nums[0] ;
        int mini = nums[n-1] ;
        vector<int>suff(n,0) ;
        for(int i = n-1 ; i>= 0 ;i--){
            mini = min(mini,nums[i]);
            suff[i] = mini ;
        }
        for(int i = 0 ; i<n ; i++){
            maxi = max(maxi , nums[i]);
            int score = maxi - suff[i] ;
            if(score<=k) return i ;
        }
        return -1 ;
    }

};