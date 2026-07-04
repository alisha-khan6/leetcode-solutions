class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int temp = arr[i] ;
        for(int i = 1 ; i < nums.size() ; i++){
            int temp = nums[i] ;
            for(int j = i - 1 ; j >= 0 ; j-- ){
                if(temp < nums[j]){
                    nums[j+1] = nums[j] ;
                }else{
                    break ;
                }
                nums[j] = temp ;
            } 
        }
       
    }
};
