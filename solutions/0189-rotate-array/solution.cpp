class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // k %= nums.size() ;
        // for(int i = 0 ; i < nums.size() / 2 ; i++){
        //     int temp = nums[i] ;
        //     nums[i] = nums[nums.size() - i - 1];
        //     nums[nums.size() - i - 1] = temp ;
        // }
        // for(int i = 0 ; i < k / 2; i++){
        //     int temp = nums[i] ;
        //     nums[i] = nums[k - i - 1];
        //     nums[k - i - 1] = temp ;
        // }
        // for(int i = 0 ; i < (nums.size() - k)/2 ; i++){
        //     int temp = nums[k+i] ;
        //     nums[k+i] = nums[nums.size() - i - 1];
        //     nums[nums.size() - i - 1] = temp ;
        int n = nums.size();
        
        // 1. Handle edge case where k is larger than the array size
        k %= n; 
        
        // 2. Reverse the entire vector
        reverse(nums.begin(), nums.end());
        
        // 3. Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        // 4. Reverse the remaining elements
        reverse(nums.begin() + k, nums.end());
        
    }
};
