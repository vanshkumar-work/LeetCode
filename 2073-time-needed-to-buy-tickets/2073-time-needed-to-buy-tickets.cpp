class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int , int >> mp ;
        for(int i = 0 ; i<tickets.size(); i++){
            mp.push({i,tickets[i]});
        }
        int time = 0 ;
        while(true){
            auto curr = mp.front();
            mp.pop();
            curr.second -- ;
            time++ ;
            if(curr.second==0){
                if(curr.first==k){
                    return time ;
                }
            }
            else{
                mp.push(curr);
            }

        }
        
    }
};