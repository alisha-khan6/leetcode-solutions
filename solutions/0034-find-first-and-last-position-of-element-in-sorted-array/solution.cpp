class Solution {
    int first(const vector<int>& nums , int n){
        int low = 0 ;
        int high = nums.size() - 1;
        int a = -1;
        while(low <= high){
        int mid = (low + high)/2 ;
        if(n == nums[mid]){
            a = mid ;
            high = mid-1;
        }else if(n > nums[mid]){
            low = mid + 1 ;
        }else{
            high = mid - 1 ;
        }
        }
        return a ;
    }
    int lastindex(vector<int> &nums , int n){
        int low = 0 ;
        int high = nums.size() - 1;
        int b=-1;
        while(low <= high){
        int mid = (low + high)/2 ;
        if(n == nums[mid]){
            b = mid ;
            low=mid+1;
        }else if(n > nums[mid]){
            low = mid + 1 ;
        }else{
            high = mid - 1 ;
        }
        }
        return b;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = first(nums,target) ;
        int b = lastindex(nums,target) ;
        return {a,b} ;
    }
};
