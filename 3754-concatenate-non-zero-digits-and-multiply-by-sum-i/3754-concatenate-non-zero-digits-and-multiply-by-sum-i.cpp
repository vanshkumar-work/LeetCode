class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long x = 0 ;
        int count = 0 ;
        while(n>0){
            sum+=n%10 ;
            int d = n%10 ;
            if(d>0){
                x = x+ (d*pow(10,count));
                count++ ;
            }
            n/=10 ;
        }
        return x*sum ;
    }
};