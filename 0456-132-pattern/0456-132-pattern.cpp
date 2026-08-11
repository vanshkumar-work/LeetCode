class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> st ;
        int second =  INT_MIN ;
        for(int i = nums.size()-1 ;  i>=0 ; i--){
            int n = nums[i] ;
            if(n<second) return true ;
            while(!st.empty()&&st.top()<n){
                second = st.top();
                st.pop() ;
            }
            st.push(n);
        }
        return false ;

        
    }
};