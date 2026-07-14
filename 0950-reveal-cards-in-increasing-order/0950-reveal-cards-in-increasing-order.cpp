class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int n =  deck.size() ;
        deque <int> q ;
        for(int i = n-1 ; i>=0 ; i--){
            if(q.empty()){
                q.push_front(deck[i]);
            }
            else{
                int curr  = q.back() ;
                q.pop_back();
                q.push_front(curr) ;
                q.push_front(deck[i]);
            }

        }
        vector <int> ans ;
        while(!q.empty()){
            ans.push_back(q.front()) ;
            q.pop_front() ;

        }
        return ans ;
    }
};