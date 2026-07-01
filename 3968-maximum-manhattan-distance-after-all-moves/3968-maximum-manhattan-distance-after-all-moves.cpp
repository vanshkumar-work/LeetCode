class Solution {
public:
    int maxDistance(string moves) {
        int v = 0 ;
        int h = 0 ;
        int c = 0 ;
        for(char ch : moves){
            if(ch=='U') v++ ;
            else if(ch=='D') v-- ;
            else if(ch=='L')h++;
            else if(ch=='R')h--;
            else if(ch=='_')c++;
        }
        return (abs(v) + abs(h) + c);
    }
};