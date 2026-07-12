
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp = arr ;
        sort(temp.begin(),temp.end()) ;
        unordered_map<int , int> mp ;
        int  i = 1 ;
        for(int t : temp){
            if(mp.count(t)==0){
                mp[t] = i ;
                i++ ;
            }
        }
        vector<int> ans ; 
        for(int x : arr){
            ans.push_back(mp[x]);
        }
        return ans ;
        
    }
};