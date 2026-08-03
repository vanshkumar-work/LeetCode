class Solution {
public:
    int myAtoi(string s) {
        int sign = 1 ;
        int c = 0 ;
        long long num = 0;
        for (char ch : s){
            if(ch==' '&&c==0) continue ;
            else if(ch=='+'&& c==0) {
                sign = 1 ; 
                c++ ;
            }
            else if(ch=='-' && c==0 ) {
                sign = -1 ; 
                c++ ;
            }
            else if(ch>='0' && ch<='9'){
                int d = (ch-'0');
                c++ ;
                num = num*10 +d ;
                if(num*sign>=INT_MAX) return INT_MAX ;
                if(num*sign<=INT_MIN) return INT_MIN ;
            }
            else break ;
        }
        return (int)num*sign ;        
    }
};