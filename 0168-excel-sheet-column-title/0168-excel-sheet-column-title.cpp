class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans ;
        while(columnNumber>0){
                columnNumber--;
                int d = columnNumber%26 ;
                char c = 'A'+d ;
                ans += c ;
                columnNumber/=26 ;
        }
        reverse(ans.begin(),ans.end());
        return ans ;

        
    }
};