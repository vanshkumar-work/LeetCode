class Solution {
public:
    int distinctSubseqII(string s) {
        int MOD = 1e9 + 7 ;
        vector<int> st(26,0) ;
        long long curr = 1 ;
        for(char ch : s){
            int x =  ch - 'a' ;
            long long now = ( 2*curr - st[x] + MOD)%MOD ;
            st[x] = curr ;
            curr = now ;
        }
        return (curr -1 + MOD)%MOD ;
    }
};