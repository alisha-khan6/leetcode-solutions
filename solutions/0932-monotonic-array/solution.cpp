class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increase = 1 ;
        bool decrease = 1 ;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] < nums[i-1]){
                increase = 0 ;
            }
            if(nums[i] > nums[i-1]){
                decrease = 0 ;
            }
        }
        return increase || decrease ; 
    }
};
