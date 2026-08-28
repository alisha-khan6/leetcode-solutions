class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size() ;
        for(int i = 1 ; i < n ; i++){
            int key = nums[i] ;
            int j ;
            for(j = i - 1 ; j >= 0 ; j--){
                if(key < nums[j]){
                    nums[j+1] = nums[j] ;
                }else{
                    break ;
                }
            }
            nums[j+1] = key ;
        }
        // return nums ;
    }
};
