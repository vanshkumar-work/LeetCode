class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size() ;
        vector <bool> xr(2048,false) ;
        vector <bool> ans(2048 , false) ;
        for(int i = 0 ; i<n ; i++){
            for(int j= 0  ; j<n ; j++){
                xr[nums[i]^nums[j]] = true ;
            }
        }
        for(int x = 0 ; x<2048 ; x++){
            if(!xr[x]) continue ;
            for(int h : nums){
                ans[x^h] = true ;
            }
        }
        int result =  count(ans.begin(),ans.end(),true);
        return result ;

    }
};