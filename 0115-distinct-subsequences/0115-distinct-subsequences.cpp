class Solution {
public:
int solve ( int  i ,int j , string&s , string&t  , vector<vector<long long>>&dp){
    if(j==t.length()) return 1; 
    if (s.length()==i) return  0;
    if(dp[i][j]!=-1) return dp[i][j] ;
    long long ans = 0 ;
    if(s[i]==t[j]){
        ans = solve(i+1 , j+1 , s ,t ,dp) + solve( i+1 , j, s,t,dp) ;
    }
    else{
        ans = solve(i+1 ,  j , s, t, dp) ;
    }
    return dp[i][j] = ans ;
}
    int numDistinct(string s, string t) {
        int m   = s.length() ;
        int  n = t.length() ;
        vector<vector<long long>>dp (m, vector<long long>(n,-1));
        return solve(0,0,s,t,dp);
    }
};