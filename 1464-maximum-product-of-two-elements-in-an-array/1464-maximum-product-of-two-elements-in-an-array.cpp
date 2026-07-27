class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int  x= 0; 
        int y = 0; 
        for(int i : nums){
            if(i>x){
                y = x;
                x=i ;
            }
            else{
                y = max(i,y) ;
            }
        }
        return (x-1)*(y-1);
        
    }
};