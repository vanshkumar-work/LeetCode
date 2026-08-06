class Solution {
public:
    long long sum(vector<int>&nums , int d ){
        long long count  = 0 ;
        for(int j : nums){
            if (j<d) count ++ ;
            else{
                if(j%d==0){
                    count += j/d ;
                }
                else {
                    count += j/d +1 ;
                }
            }
           
        }
        return count ;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1 ;
        int right = *max_element(nums.begin(),nums.end());
        int mid ;
        int ans = INT_MAX ;
        while(left<=right){
            mid = left + (right - left)/2 ;
            if(sum(nums,mid)<=threshold){
                right = mid-1 ;
                ans = min(ans , mid) ;
            }
            else{
                left = mid+1 ;
            }
        }
        return ans ;
    }
};