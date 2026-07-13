class Solution {
public:
    bool judgeSquareSum(int c) {
        long long root = sqrt(c) ;
        long long i = 0 ; 
        long long j = root ;
        
        while(i <= j){
            long long ans = (i*i) + (j*j) ;
            if (ans == c){
                return true ;
            }else if(ans > c){
                j-- ;
            }else{
                i++ ;
            }
        }
        return false ;
    }
};
