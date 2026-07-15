class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> r ;
        queue<int> d ;
        int n = senate.length() ;
        for(int i = 0 ; i<n ; i++){
            if(senate[i]=='R'){
                r.push(i) ;
            }
            else d.push(i) ;
        }
        while(!d.empty()&&!r.empty()){
            int rv = r.front() ;
            int dv = d.front() ;
            r.pop();
            d.pop();
            if(dv<rv){
                d.push(dv+n);
            }
            else r.push(rv+n);
        }
        if(r.empty()) return "Dire" ;
        else return "Radiant" ;
        
    }
};