class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        int count = 0 ;
        int  i = 1 ;
        int  j = 0 ;
        while(n>0){
            count += i ;
            j++ ;
            if(j%8==0) i++ ;
            n-- ;
        }
        return count ;
        
        
    }
};