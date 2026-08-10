class Solution {
public:
vector<bool>dp ;
bool ans (int n ){
    dp.assign(n+1 , false) ;
    dp[0] = false ;
    for(int i = 0 ;  i<=n ; i++){
        for(int j =1 ; j*j<=i ; j++){
            if(dp[i-j*j]==0){
                dp[i] = true ;
                break ;
            }
        }
    }
    return dp[n];
}
    bool winnerSquareGame(int n) {
        return ans(n) ;
    }
};