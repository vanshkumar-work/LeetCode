class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st ;
        bool cond = true ;
        for(int i : asteroids){
            if(!st.empty() && i<0 && st.top()>0){
                if(abs(i)<st.top()) continue ;
                else{
                    while(!st.empty()&& st.top()>0 && abs(i)>=st.top()){
                        if(st.top()==abs(i)){
                            cond = false ;
                            st.pop() ;
                            break ; 
                        }
                        else {st.pop();} 
                    }
                }
                if ( st.empty() || st.top()<0 ) st.push(i);
                if(cond== false&& st.top()<0){
                    st.pop();
                    cond = true ;
                }
                cond = true  ;
            }
            else{
                st.push(i) ;
            }
        }
        int n = st.size() ;
        vector<int>ans(n,0) ;
        for( int i= n-1 ; i>=0 ; i--){
            ans[i] = st.top(); 
            st.pop() ;
        }
        return ans;
    }
};