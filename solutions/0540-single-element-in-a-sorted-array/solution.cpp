class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int arr = {1,1,2,3,3,4,4,8,8};
        int ans = 0;
        for(int i = 0 ; i < nums.size() ;i++){
            ans = ans ^ nums[i];
        }
         return ans ;
    }
  
};
