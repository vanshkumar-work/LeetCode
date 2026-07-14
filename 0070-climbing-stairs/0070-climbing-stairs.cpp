class Solution {
public:
vector<int>dp;
int solve(int i){
    if(i==0){
        return 1 ;
    }
    if(i<0){
        return 0 ;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    return dp[i] = solve(i-1) + solve(i-2);
}
    int climbStairs(int n) {
        dp.assign(n+1,-1);
        return solve(n);
        
    }
};