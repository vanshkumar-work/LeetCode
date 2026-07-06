class Solution {
public:
    int calculate(string s) {
        stack<long long > st ;
        long long  result = 0 ;
        long long  sign  = 1;
        long long  num = 0 ;
        for(char ch : s){
            if(isdigit(ch)){
                num =  num*10 + (ch - '0');
            }
            else if(ch=='+'){
                result += sign*num ;
                sign = 1 ;
                num = 0 ;
            }
            else if(ch=='-'){
                result += sign*num ;
                sign = -1;
                num = 0;
            }
            else if(ch=='('){
                st.push(result);
                st.push(sign);
                result = 0;
                sign = 1;
            }
            else if(ch==')'){
                result += sign*num ;
                result *= st.top() ;
                st.pop();
                result += st.top();
                st.pop();
                num = 0;

            }
        } 
        result += sign*num ;
        return result ;       
    }
};