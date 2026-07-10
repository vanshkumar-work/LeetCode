class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st ;
        int n = heights.size();
        int area = 0;
        for(int i = 0 ; i<=n ; i++){
            while(!st.empty() && ( i==n || heights[i]<=heights[st.top()])){
                int h = heights[st.top()];
                st.pop();
                int b ;
                if(st.empty()){
                    b = i ;
                }
                else{
                    b = i -st.top()-1;
                }
                area = max(area, h*b);
            }
            st.push(i);
        }
        return area ;
        
    }
};