class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> prefixGcd(n);
        int mx = 0;
        
        // Step 1: Construct the prefixGcd array as defined by the problem rules
        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
            prefixGcd[i] = std::gcd(nums[i], mx);
        }
        
        long long sum = 0 ;
        sort(prefixGcd.begin() , prefixGcd.end()) ;
        for(int i = 0 ; i < n/2 ; i++){
            int gcd_1 = std::gcd(prefixGcd[i] , prefixGcd[n-i-1]);
            sum += gcd_1 ;
        }
        return sum ;
        }
};
