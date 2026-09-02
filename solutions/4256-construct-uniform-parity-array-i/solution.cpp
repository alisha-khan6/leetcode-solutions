class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd = 0;

        for(int i = 0; i < nums1.size(); i++) {
            if(nums1[i] % 2 != 0) {
                odd++;
            }
        }

        if(odd == 0 || odd >= 2) {
            return true;
        }else if (odd == 1){
            return true ;
        }

        return false;
    }
};
