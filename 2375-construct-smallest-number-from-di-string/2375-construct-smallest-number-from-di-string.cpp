class Solution {
public:
    string smallestNumber(string pattern) {
        stack<int>st ;
        st.push(1) ;
        int d = 0  ;
        for(int i = 0 ;  i<pattern.length() ; i++){
            if(pattern[i] == 'D'){
                d++ ;
                int p = st.top() ;
                for(int i= 0  ; i<d ; i++){
                    st.pop() ;
                }
                for(int j=d ; j>= 0 ;j--){
                    st.push(p+j) ;
                }


            }
            else if(pattern[i] == 'I'){
                st.push(i+2) ;
                d=0  ;
            }
        }
        string ans ;
        while(!st.empty()){
            ans+=char(st.top()+'0') ;
            st.pop() ;
        }
        reverse(ans.begin(),ans.end()) ;
        return ans ;

    }
};