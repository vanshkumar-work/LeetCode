class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q ;
        for(int x : students){
            q.push(x);
        }
        int i = 0 ; 
        int r = 0 ;
        while(!q.empty()){
            if(q.front()==sandwiches[i]){
                q.pop();
                i++ ;
                r =0 ;
            }
            else{
                int curr = q.front();
                q.pop();
                q.push(curr) ;
                r++ ;
                if(r==q.size()){
                    return q.size() ;
                }
            }

        }
        return 0 ;
    }
};