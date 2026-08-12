class Solution {
public:
    int addDigits(int num) {
        if(num < 10){
            return num ;
        }
        long long  sum = 0 ;
        while(num > 0){
            long long rem = num % 10 ;
            sum += rem ;
            num = num / 10 ;
        }
        num = sum ;
        return addDigits(num) ;
    }
};
