class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a = INT_MIN ;
        int b = INT_MIN ;
        int c = INT_MIN ;
        int d = INT_MAX ;
        int e = INT_MAX ;
        for(int i : nums){
            if(a<i){
                c = b ;
                b = a ;
                a = i ;
            }
            else if(b<i) {
                c = b ;
                b = i ;
            }
            else{
                c = max(c,i) ;
            }
            if(d>i){
                e = d;
                d = i ;
            }
            else{
                e=min(e,i) ;
            }
            
        }
        long long result = a*b*c ;
        long long result2 = a*d*e ;
        long long ans = max(result,result2) ;
        return (int)ans ;
    }
};