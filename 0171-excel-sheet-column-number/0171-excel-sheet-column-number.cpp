class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0 ;
        for(char  c : columnTitle){
            ans = ((c-'A'+1) + (ans*26)) ;
        }
        return ans ; 
        
    }
};