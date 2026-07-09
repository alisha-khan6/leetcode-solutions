class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0 ;
        long long sum_1 = 0 ;
        long long sum_2 = 0 ;
        
        while(n!=0){
            long long rem = n % 10 ;
            if(rem != 0){
                sum = (sum * 10) + rem ;
            }
            sum_1 += rem ;
            n = n / 10 ;
        }
        
        while(sum != 0){
            long long rem_1 = sum % 10 ; 
            sum_2 = (sum_2 * 10) + rem_1 ;
            sum = sum / 10 ;
        }
        return sum_2  * sum_1  ;
    }
};
