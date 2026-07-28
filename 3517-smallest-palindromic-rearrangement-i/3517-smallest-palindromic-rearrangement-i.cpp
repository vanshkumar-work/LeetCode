class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26,0) ;
        int n = s.length();
        for(char c : s){
            freq[c-'a']++ ;
        }
         string temp ;
         string p ;
         for(int i = 0 ; i<26 ; i++){
            int t =freq[i];
            if(t>0){
                while(t>1){
                    temp += ('a'+i);
                    t-=2 ;
                }
                if(t==1){
                    p += ('a'+i);
                    t-- ;
                }
            }
         }
         string ans ;
         ans += temp+p ;
         reverse(temp.begin(),temp.end()) ;
         ans+=temp ;
         return ans ;
        
    }
};