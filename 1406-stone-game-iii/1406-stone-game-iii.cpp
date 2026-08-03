class Solution {
public:
vector<int> dp ;
int n ;
    int p(vector<int>& stoneValue , int i){
        if(i>=n) return 0 ;
        int sum = 0;
        if (dp[i]!=INT_MIN){
            return dp[i];
        } 
        int ans = INT_MIN; 
        for(int k =0 ; k<3&&i+k<n ; k++){
            sum+=stoneValue[i+k] ;
            ans = max(ans,sum-p(stoneValue ,i+k+1));
        }
        return dp[i] = ans ;
    }

    string stoneGameIII(vector<int>& stoneValue) {
       n = stoneValue.size();
       dp.assign(n,INT_MIN);
       int diff = p(stoneValue , 0);
       if(diff<0) return "Bob" ;
       else if(diff>0) return "Alice" ;
       return "Tie" ; 
    }
};