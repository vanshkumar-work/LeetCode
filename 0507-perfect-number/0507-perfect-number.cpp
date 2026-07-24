class Solution {
public:
    bool checkPerfectNumber(int num) {
        int n = 2 ;
        long long sum = 1 ;
        if(num==1) return false ;
        while(n*n<=num){
            if(num%n==0){
                sum += n ;
                if(n*n != num ){
                    sum += (num/n) ;
                }
            }
            n++ ;
        }
        return sum==num ;
        
    }
};