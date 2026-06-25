class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       sort(nums.begin() , nums.end());
       for(int i = 0 ; i < nums.size() - 1 ; i++){
        if(nums[i] == nums[i+1]){
            return true ;
        }
       } 
       return false;
    }
};

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//        int i = 0 ;
//         int j = i + 1;
//         while(i < (nums.size()-1)){
//             if(nums[i] == nums[j]){
//                 return true ;
               
//             }
//             j++;
//             if(j > (nums.size()-1)){
//                 i++;
//                 j = i + 1 ;
//             }
//         }
//         return false;
//     }
// };
