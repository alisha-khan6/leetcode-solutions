class Solution {
public:
    bool canJump(vector<int>& nums) {
         int maxReach = 0; // Tracks the farthest index we can reach
        
        for (int i = 0; i < nums.size(); i++) {
            // If the current index is unreachable, we cannot proceed
            if (i > maxReach) {
                return false;
            }
            
            // Update the farthest reach using standard C++ max()
            maxReach = max(maxReach, i + nums[i]);
            
            // Optimization: If we can already reach the last index, return true early
            if (maxReach >= nums.size() - 1) {
                return true;
            }
        }
        
        return true; 
    }
};
