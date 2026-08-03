class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long st = 0 ;
        for(int i = 0 ; i<nums.size() ; i++){
            for(int j = 0 ; j<nums.size() ; j++){
                long long a = nums[i] ;
                long long b = nums[j] ;
                long long g = gcd(a,b);
                long long s = pow(g,2) ;
                long long m = a*b ;
                st = max(st , m/s) ;
            }
        }
        return st ;
    }
};