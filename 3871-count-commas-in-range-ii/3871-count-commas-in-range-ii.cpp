class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return  0 ;
        else if(n<1000000) return n-999 ;
        else if(n<1000000000) return 999000 + 2*(n-999999) ;
        else if (n<1000000000000) return 1998999000 + 3*(n-999999999);
        else if(n<1000000000000000) return 2998998999000 + 4*(n-999999999999);
        else return 3998998998999005 ;
    }
};