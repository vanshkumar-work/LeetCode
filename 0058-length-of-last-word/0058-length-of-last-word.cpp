class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0 ; 
        int n = s.length() ;
        while(s[n-1]==' '){
            n-- ;
        }
        for(int i = n-1 ; i>= 0 ; i--){
            if(s[i]!=' '){
                count++ ;
            }
            else{
                break ;
            }
        }
        return count ;
        
    }
};