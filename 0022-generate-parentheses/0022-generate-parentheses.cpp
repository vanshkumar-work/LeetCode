class Solution {
public:
    void sol(string s , int open , int close , int n , vector<string>&ans){
        if(s.length()==n*2){
            ans.push_back(s) ;
            return ;
        }
        if(open<n){
            sol(s+'(',open+1,close,n,ans);
        }
        if(close<open){
            sol(s+')',open,close+1,n,ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans ;
        sol("",0,0,n,ans);
        return ans;
        
    }
};