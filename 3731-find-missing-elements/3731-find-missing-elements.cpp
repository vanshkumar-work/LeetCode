class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> st; 
        int mini = INT_MAX ;
        int maxi = INT_MIN ;
        for(int x : nums){
            mini = min(mini , x);
            maxi = max(maxi , x);
            st.insert(x) ;
        }
        vector<int>ans ;
        for(int i = mini ; i<=maxi ; i++){
            if(!st.contains(i)) ans.push_back(i);
        }
        return ans ;
    }
};