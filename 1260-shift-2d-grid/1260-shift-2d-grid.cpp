class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int m = grid.size() ;
        int n = grid[0].size();
        if(k==0) return grid ;
        vector<vector<int>> ans(m, vector<int>(n))  ;
        while(k!=0){
            int i =0 ;
            while(i<m){
                int  j =1 ;
                while(j<n){
                    ans[i][j] = grid[i][j-1];
                    j++ ;
                }
                if(i!=0) ans[i][0] = grid[i-1][n-1];
                else ans[0][0] = grid[m-1][n-1];
                i++ ;

            }
            k-- ;
            grid = ans ;
        }
        return ans ;
    }
};