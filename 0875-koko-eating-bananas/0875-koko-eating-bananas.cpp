class Solution {
public:
    long long hours (vector<int>& piles , int k){
        long long count = 0 ;
        for(int i = 0 ; i<piles.size() ; i++){
           count += piles[i] / k;
            if (piles[i] % k != 0)
                count++;
        }
        return count ;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1 ;
        int n = piles.size();
        int right = *max_element(piles.begin(),piles.end()) ;
        int k  ;
        int ans = right ;
        while(left<=right){
            k= left + (right -left)/2 ;

           if(h>=hours(piles,k)){
            right = k-1 ;
            ans = min(ans, k) ;
           } 
           else{
            left = k+1 ;
           }
        }
        return ans;
        
    }
};