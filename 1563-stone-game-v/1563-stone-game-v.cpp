class Solution {
public:
    int pre(int i , int  j , vector<vector<int>>&dp ,vector<int>&prefix ){
        if(i==j) return 0 ;
        if(dp[i][j]!=-1) return dp[i][j] ;
        int ans = 0 ;
        for(int k=i ; k<j ; k++){
            int leftsum = prefix[k+1] - prefix[i] ;
            int rightsum = prefix[j+1] - prefix[k+1] ;
            if(leftsum<rightsum){
                ans = max(ans , leftsum+pre(i,k,dp,prefix));
            }
            else if(leftsum>rightsum){
                ans = max(ans , rightsum+pre(k+1,j,dp,prefix));
            }
            else{
                ans = max(ans , max(leftsum+pre(i,k,dp,prefix),rightsum+pre(k+1,j,dp,prefix)));
            }

        }
        return dp[i][j]= ans ;     
    }
    int stoneGameV(vector<int>& stoneValue) {
        int n = stoneValue.size() ;
        vector<vector<int>>dp(n,vector<int>(n,-1)) ;
        vector<int> prefix(n+1,0) ;
        for(int i =0 ; i<n ; i++){
            prefix[i+1] = prefix[i]+stoneValue[i];
        }
        return pre(0,n-1,dp,prefix);
    }
};