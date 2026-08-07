class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long sum =0 ;
        for(int num : candies){
            sum+= num ;
        }
        if (sum<k) return 0 ;
        long long right = *max_element(candies.begin(),candies.end());
        long long left  = 1 ;
        long long ans = 0 ;
        while(left <=right){
            long long children =  0 ;
            long long mid = left+(right - left)/2 ;
            for(int i =0  ; i<candies.size() ; i++){
                children += candies[i]/mid ;
            }
            if(children>=k){
                ans = mid ;
                left = mid+1 ;
            }
            else{
                right = mid-1 ;
            }
        }
        return (int)ans ;
    }
};