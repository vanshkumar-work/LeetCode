class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int left = 0 ;
        string ans = "123456789";
        int right = 0 ;
        int n = ans.length();
        int  l = low ;
        int h  = high ;
        vector<int>result ;
        while(low>0){
            low/=10 ;
            right ++ ;
        }
        int r = right ;
        int temp = 0 ;
        while(high>0){
            high/=10 ;
            temp ++ ;
        }
        while(r<=temp){
            left = 0 ;
            right = r ;
            while(left+r<=n){
                int p  = stoi(ans.substr(left,r));
                if(p>=l&&p<=h){
                    result.push_back(p);
                    left++ ;
                    right++ ;
                }
                else{
                    left++ ;
                    right++ ;
                }
            }
            r++ ;
        }
        return result ;
    }
};