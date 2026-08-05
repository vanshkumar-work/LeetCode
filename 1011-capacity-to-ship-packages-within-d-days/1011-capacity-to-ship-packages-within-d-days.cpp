class Solution {
public:
    int day(vector<int>& weights , int k){
        int count = 1 ;
        long long sum = 0 ;
        for(int p : weights){
            sum += p ;
            if(sum>k){
                sum = p ;
                count ++ ;
            }
        }
        return count ;
    }
    int shipWithinDays(vector<int>& weights, int days) {
            long long sum = 0 ;
            for(int i = 0 ; i<weights.size(); i++){
                sum+= weights[i];
            }
            long long left = *max_element(weights.begin(), weights.end()) ;
            long long right = sum ;
            long long  k ;
            long long ans = INT_MAX ;
            while(left<=right){
                k = left + (right - left)/2 ;
                if(day(weights,k)<=days){
                    right = k-1 ;
                    ans = min(ans,k) ;
                }
                else{
                    left = k+1 ;
                }
            }
        return (int)ans ;
    }
};