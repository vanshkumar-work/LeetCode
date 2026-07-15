class Solution {
public:
    int gcdOfOddEvenSums(int n) {
       int a = pow(n,2) ;
       int b = pow(n,2)+n ;
       return gcd(a,b) ;
       
    }
};