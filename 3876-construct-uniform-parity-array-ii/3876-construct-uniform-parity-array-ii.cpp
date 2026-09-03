class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minl = *min_element(nums1.begin() , nums1.end()) ;
        if(minl%2==1) return true  ;
        for(int i = 0 ; i<nums1.size() ; i++){
            if(nums1[i]%2==1){
                return false ;
                break ;
            }
        }
        return true ;

        
    }
};