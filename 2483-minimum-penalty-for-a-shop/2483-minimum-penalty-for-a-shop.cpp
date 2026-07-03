class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.length(); 
        int prefix = 0  ;
        int besttime = 0 ;
        int minpenalty = 0 ;
        for(int i =0 ; i<n ;i++){
            prefix+= customers[i] == 'Y'?-1 : 1 ;
            if(prefix<minpenalty){
                besttime = i+1 ;
                minpenalty = prefix ;
            }
        }
        return besttime ;
            
        

        
    }
};