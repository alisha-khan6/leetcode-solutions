class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max_m = nums[0] ;
        int a = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > max_m){
                a = i ;
                max_m = nums[i];
            }
        }
        return a ;
    }
};
