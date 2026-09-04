class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size() ;
        vector<int>suff(n,0);
        int minl = INT_MAX ;
        for(int i = n-1 ; i>=0 ; i--){
            minl = min(minl,nums[i]) ;
            suff[i] = minl ;
        }
        int maxi = nums[0] ;
        for(int i = 0 ; i<n ; i++){
            maxi = max(maxi,nums[i]);
            int score = maxi - suff[i] ;
            if(score<=k) return i ;
        }
        return -1 ;

        
    }
};