class Solution {
public:
    bool small(char c){
        if(c<='z'&& c>='a'){
            return true; 
        }
        else return false ;
    }
    bool large(char c){
        if(c<='Z'&&c>='A'){
            return true ;
        }
        else return false ;
    }
    bool number(char c ){
        if(c<='9'&& c>='0'){
            return true ;
        }
        else return false ;
    }
    bool special(char c){
        if(c=='!'||c=='@'||c=='#'||c=='$') return  true ;
        else return false ;
    }
    int passwordStrength(string password) {

        unordered_set<char>mp(password.begin(),password.end()) ;
        int ans = 0 ;
        for (auto c : mp){
            if(small(c)) ans++ ;
            else if(large(c)) ans+=2 ;
            else if(special(c)) ans+=5 ;
            else if(number(c)) ans+=3 ;
        }
        return ans ;     
    }
};