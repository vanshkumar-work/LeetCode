class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int>freq(10,0) ;
        for(int d : digits){
            freq[d]++ ;
        }
        int count = 0 ;
        for(int i=100 ; i<1000 ; i+=2){
        int a = i/100 ;
        int b = (i/10)%10 ;
        int c = i % 10 ;
        freq[a]-- ;
        freq[b]-- ;
        freq[c]-- ;
        if(freq[a]>=0 && freq[b]>=0 && freq[c]>=0){
            count++ ;
        }
        freq[a]++ ;
        freq[b]++ ;
        freq[c]++ ;
        }
        return count ;
    }
};