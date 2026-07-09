class Solution {
public:
    int maximum69Number (int num) {
        vector<int> digits ;
        while(num>0){
            int d = num%10; 
            digits.push_back(d) ; ;
            num/=10 ;
        }
        int n = digits.size() ;
        for(int i = n-1 ; i>=0 ; i--){
            if(digits[i]==6){
                digits[i] = 9 ;
                break ;
            }
        }
        int ans = 0 ;
        for(int i = 0 ;  i<n ; i++){
            ans += (digits[i]* pow(10,i));
        }
        return ans ;
        
    }
};