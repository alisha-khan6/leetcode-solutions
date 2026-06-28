class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0 ; 
        int high = nums.size() - 1;
        int a ;
        bool found = false ;
        while(low <= high){
            int mid = low + (high - low) / 2 ;
            if(nums[mid] == target){
                found = true;
                a = mid ; 
                break ;
            }else if(target > nums[mid]){
                low = mid + 1 ;
            }else{
                high = mid - 1 ;
            }
        }
        if(found){
            return a; 
        }else{
            return -1 ;
        }
    }
};
