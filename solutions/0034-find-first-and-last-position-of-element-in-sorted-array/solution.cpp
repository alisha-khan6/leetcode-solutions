class Solution {
public:
    int first(vector<int>& nums, int target){
    int ans = -1;
    int low = 0 ;
    int high = nums.size() - 1 ;
    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] == target){
            ans = mid ;
            high = mid - 1 ;
        }else if (target > nums[mid]){
            low = mid + 1 ;
        }else{
            high = mid - 1 ;
        }
    }
    return ans ;
    }
    int last(vector<int>& nums, int target){
    int ans = -1;
    int low = 0 ;
    int high = nums.size() -1 ;
    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] == target){
            ans = mid ;
            low = mid + 1 ;
        }else if (target > nums[mid]){
            low = mid + 1 ;
        }else{
            high = mid - 1 ;
        }
    }
    return ans ;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
    int firstIndex = first(nums, target);
    int lastIndex = last(nums, target);

    return {firstIndex, lastIndex};
    }
};
