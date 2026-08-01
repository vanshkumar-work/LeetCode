class Solution {
public:
    vector<vector<int>>dp;
    int sol(vector<int>&nums ,int i ,int j){
       if (i>j) return 0; 
       if(dp[i][j]!=INT_MIN) return dp[i][j];
        if(i==j) { 
            dp[i][j]= nums[i] ;
            return dp[i][j];
        }
     int left = nums[i]-sol(nums,i+1,j) ;
     int  right = nums[j]-sol(nums ,i,j-1 );
     dp[i][j] = max(right,left) ;
     return dp[i][j];
    }

    bool predictTheWinner(vector<int>& nums) {
        int i = 0 ;
        int j = nums.size() - 1;
        dp.resize(j+1 , vector<int>(j+1,INT_MIN)) ;
        return sol(nums,i,j) >=0 ;
    
        
    }
};