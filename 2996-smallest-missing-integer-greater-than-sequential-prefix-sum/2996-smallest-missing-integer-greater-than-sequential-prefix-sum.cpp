class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int pre = nums[0]; 
        int n =  nums.size() ;
        for(int k=1 ; k<n ; k++){
            if(nums[k]==nums[k-1]+1){
                pre+= nums[k]; 
            }
            else break ;
        }
        unordered_set<int>st(nums.begin(),nums.end()) ;
        while(st.count(pre)){
            pre++ ;
        }
        return pre ;
        
    }
};