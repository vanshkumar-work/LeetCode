class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n  = nums.size();
        vector<bool> s(n,false);
        vector<int> res ;
        for(int i = 0 ; i<n ; i++){
            if(s[nums[i]]) res.push_back(nums[i]);
            else s[nums[i]]= true ;
        }
        return res ;
        
    }
};