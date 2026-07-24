class Solution {
public:
    string reverseWords(string s) {
        string ans ;
        string temp ;
        int d= 1 ;
        for (int i = s.length()-1 ; i>=0 ; i--){
            char c = s[i];
            if((c!=' ')){
                temp += c ;
                d= 0 ;
            }
            else if(c==' ' && d!=1){
                reverse(temp.begin(),temp.end());
                if(!ans.empty()) ans+= ' ' ;
                ans += temp ;
                d = 1 ;
                temp = "" ;
            }
        }
        reverse(temp.begin(),temp.end());
        if(!temp.empty()){
            if(!ans.empty()){
                ans += ' ';
            }
            ans += temp ;
        }
                
        return ans ;
        
    }
};