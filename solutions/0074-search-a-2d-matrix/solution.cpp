class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // for(int i = 0 ; i < matrix.size() ; i++){
        //     for(int j = i ; j < matrix[i].size() ; j++){
        //         if(matrix[i][j] == target){
        //             return true ;
        //         }
        //     }
        // }
        // return false ;
        int m = matrix.size() ;
        int n = matrix[0].size() ;
        int low = 0 ; 
        int high = (m*n) - 1 ;
        bool found = false ;
        while(low <= high){
            int mid = low + (high - low) / 2 ;
            int i = mid / n ;
            int j = mid % n ;
            if(matrix[i][j] == target){
                return true ;
            }else if(matrix[i][j] < target){
                low = mid + 1 ;
            }else{
                high = mid - 1 ;
            }
        }
        return false ;
    }
};
