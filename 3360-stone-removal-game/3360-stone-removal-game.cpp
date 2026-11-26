class Solution {
public:
    bool canAliceWin(int n) {
        int a = 10 ;
        bool ans = true  ;
        while (n>=a){
            n -= a ;
            a-- ;
            ans = !ans ;
        }
        return !ans;       
    }
};