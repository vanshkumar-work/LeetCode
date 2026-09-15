class Solution {
public:
    bool isPalindrome(string &s, int l , int r ){
        while(l<r){
            if(s[l]!=s[r]) return false ;
            l++;
            r-- ;
        }
        return true ;
    }
    int maxPalindromes(string s, int k) {
        int ans = 0 ;
        int n = s.length() ;
        int x = 0 ;
        for(int j = k-1 ; j<n ; j++){
            for(int i = x ; i<=j-k+1 ; i++){
                if(isPalindrome(s,i,j)) {
                    ans++ ;
                    x=j+1 ;
                    break ;
                }
                
            }
        }
        return ans ;
        
    }
};