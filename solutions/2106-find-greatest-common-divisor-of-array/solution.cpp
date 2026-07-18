class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max_m = nums[0] ;
        int min_m = nums[0] ;
        for(int i = 0 ; i < nums.size() ; i++){
            max_m = max(max_m , nums[i]);
            min_m = min(min_m , nums[i]);
        }
        return gcd(max_m , min_m) ;
    }
};
