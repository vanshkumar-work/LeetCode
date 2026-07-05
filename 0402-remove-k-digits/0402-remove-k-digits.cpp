class Solution {
public:
    string removeKdigits(string num, int k) {
        int n =  num.size() ;
        stack<char> st ;
        st.push(num[0]);
        if(k>=n) return "0";
        string ans = "" ;
        for(int i =1 ; i<n ; i++){
            while(!st.empty()&&st.top()>num[i]){
                if(k==0) break ;
                st.pop() ;
                k-- ;
            }
            st.push(num[i]);
        }
        if(k>0){
            while(k>0 && !st.empty()){
                st.pop();
                k-- ;
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop() ;
        }
        reverse(ans.begin(),ans.end());
        int t =0 ;
        while(t<ans.size()&& ans[t]=='0'){
            t++;
        }
        ans = ans.substr(t) ;
        if(ans=="") return "0" ;
        return ans;
        
    }
};