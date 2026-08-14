class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l = 0 ;
        int n = s.length();
        vector<int>freq(26,0);
        int ans  = 0 ;
        for(int r =0 ;  r<n ; r++){
           char ch = s[r] ;
           freq[ch-'a']++ ;
           if(freq[ch-'a']>2){
            while(freq[ch-'a']>2){
                freq[s[l]-'a']-- ;
                l++ ;
            }
           }
           ans = max(ans,r-l+1);
        }
        return ans ;
    }
};