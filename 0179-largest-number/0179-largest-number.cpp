class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string ans = "" ;
        vector<string> num ;
        for(auto o : nums){
            num.push_back(to_string(o));
        }
        sort(num.begin(),num.end() , [] (string a , string b){
            return a+b>b+a;
        });
        if(num[0]=="0") return "0" ;
        for(auto i : num){
            ans+=i ;
        }
        return ans ;
        
    }
};