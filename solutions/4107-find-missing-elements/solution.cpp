class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<int> missing ;
        for(int i = 1 ; i < nums.size() ; i++){
            if (nums[i] != (nums[i - 1] + 1) ){
                int current = nums[i-1] + 1 ;
                while(current < nums[i]){
                    missing.push_back(current);
                    current++;
                }
            }
        }
        return missing ;
    }
};
