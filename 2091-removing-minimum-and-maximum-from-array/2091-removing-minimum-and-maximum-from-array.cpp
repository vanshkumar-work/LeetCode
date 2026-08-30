class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi = 0 ;
        int mini = 0 ;
        int temp_min = nums[0] ;
        int temp_max = nums[0] ;
        for(int i = 1 ; i<nums.size() ; i++){
            if(temp_min<nums[i]){
                mini = i ;
                temp_min = nums[i];
            }
            else if ( temp_max>nums[i]){
                maxi = i ;
                temp_max = nums[i] ;
            }
        }
        int a = max(maxi,mini) + 1 ;
        int b = nums.size() - min(maxi,mini) ;
        int c = min(maxi,mini) + nums.size() - max(maxi,mini)+1 ;
        return min(a,min(b,c));
        
    }
};