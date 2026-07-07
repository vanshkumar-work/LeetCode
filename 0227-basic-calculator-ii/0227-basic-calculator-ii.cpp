class Solution {
public:
    int calculate(string s) {
        long long  result = 0 ;
        char op = '+';
        stack <int> st ;
        long long  num = 0 ;
        for(int i = 0 ;i<s.size() ; i++){
            char ch =s[i];
            if(isdigit(ch)){
                num =  num*10 + (ch - '0');
            }
            if(!isdigit(ch) && ch != ' '|| i == s.size() -1  ){
                if(op=='+'){
                    st.push(num);
                }
                else if (op=='-'){
                    st.push(-num);
                }
                else if (op=='*'){
                    int top = st.top();
                    st.pop();
                    st.push(num*top);
                }
                else if (op=='/'){
                    int top = st.top();
                    st.pop();
                    st.push(top/num);
                }
                op =ch ;
                num =0 ; 
            }
            
        } 
        while(!st.empty()){
            result += st.top();
            st.pop();
        }
        return result ;
        
        
    }
};