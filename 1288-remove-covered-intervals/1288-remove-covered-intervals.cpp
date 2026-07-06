class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int count = 0 ;
        int n =intervals.size();
        for (int i = 0 ; i<n ; i++){
            for (int j =0 ;  j<n ; j++){
                if(j==i)continue ;
                if(intervals[i][0]>=intervals[j][0]&&intervals[i][1]<=intervals[j][1]){
                    count++ ;
                    break ;
                }
            }
            
        }
        return n-count ; 
    }
};