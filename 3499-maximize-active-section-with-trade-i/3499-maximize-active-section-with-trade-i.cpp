class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int ones = 0;
        for(char c : s)
            if(c == '1') ones++;

        string t = "1" + s + "1";

        vector<pair<char,int>> groups;

        for(char c : t){
            if(groups.empty() || groups.back().first != c)
                groups.push_back({c,1});
            else
                groups.back().second++;
        }

        int ans = ones;

        for(int i = 1; i + 1 < groups.size(); i++){
            if(groups[i].first == '1' &&
               groups[i-1].first == '0' &&
               groups[i+1].first == '0'){

                ans = max(ans,
                          ones + groups[i-1].second + groups[i+1].second);
            }
        }

        return ans;
    }
};