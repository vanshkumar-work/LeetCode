class Solution {
public:
    int maxProduct(int n) {
        int first = n%10 ;
        n/=10 ;
        int second = n%10 ;
        n/=10 ;
        if(first<second) swap(first,second) ;
        while(n!=0){
            int digit = n%10 ;
            n/=10;
            if(digit>first){
                second = first ;
                first = digit ;
            }
            else{
                second = max(second,digit) ;
            }

        }
        return first*second ;
    }
};