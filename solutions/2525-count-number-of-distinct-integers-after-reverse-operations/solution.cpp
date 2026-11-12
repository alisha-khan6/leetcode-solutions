class Solution {
int reverse(int a){
    int r = 0 ;
    while(a != 0){
        int rem = a % 10 ;
        r = rem + r * 10 ;
        a /= 10 ;
    }
    return r ;
}
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size() ;
        unordered_set<int> s ;
        for(int i = 0 ; i < n ; i++){
            int rev = reverse(nums[i]) ;
            s.insert(nums[i]) ;
            s.insert(rev) ;
        }
        return s.size() ;
    }
};
