class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max_m = -1;
        int a = -1;
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] > max_m){
                a = i;
                max_m = arr[i] ;
            }
        }
       return a ; 
    }
};
