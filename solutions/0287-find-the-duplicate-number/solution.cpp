// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int i = 0 ; 
        
//         int a = -1 ;
//         for(int i = 0 ; i < nums.size() ; i++){
//             if(nums[i] == nums[i+1]){
//                 a = nums[i];
//                 break;
//             }
//         }
//         return a;
//     }
// };

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0 ;
        int fast = 0 ;
        while (true){
            slow = nums[slow] ;
            fast = nums[nums[fast]] ;
            if(slow == fast){
                break ;
            }
        }
        int slow_1 = 0;
        while(slow_1 != fast){
            slow_1 = nums[slow_1] ;
            fast = nums[fast] ;
        }
        return slow_1 ;
    }
};

