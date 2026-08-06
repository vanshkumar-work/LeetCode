class Solution {
public:
    int day(vector<int>& bloomDay , int mid , int k){
        int flowers  = 0 ;
        int res = 0 ;
        for(int i = 0 ; i<bloomDay.size() ;i++){
            int l = bloomDay[i] ;
            if(l<=mid){
                flowers ++ ;
                if(flowers==k){
                    res++ ;
                    flowers = 0;
                }
            }
            else{
                flowers = 0 ;
            }
        }
        return res ;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int left  = 1 ;
        int right = *max_element(bloomDay.begin(),bloomDay.end());
        int mid ;
        int ans = INT_MAX ;
        while(left<=right){
            mid = left + (right - left)/2 ;
            int req = day(bloomDay , mid , k) ;
            if( req<m){
                left = mid+1 ;
            }
            else{
                right = mid -1 ;
                ans = min(ans,mid);
            }
        }
        if(ans==INT_MAX) ans = -1 ;
        return ans ;
    }
};