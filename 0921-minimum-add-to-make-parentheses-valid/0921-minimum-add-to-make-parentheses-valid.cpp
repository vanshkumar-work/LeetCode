class Solution {
public:
    int minAddToMakeValid(string s) {
        int c = 0 ;
        int d = 0 ;
        for(char ch : s){
            if(ch=='('){
                c++;
            }
            else{
                if(c>0)c-- ;
                else d++ ;
            }
        }
        return abs(c+d) ;
        
    }
};