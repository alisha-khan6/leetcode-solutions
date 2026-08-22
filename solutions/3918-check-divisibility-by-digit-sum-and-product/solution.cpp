class Solution {
private:
    int sum_product(int n){
        int sum = 0 ;
        int product = 1 ;
        while(n > 0){
            int rem = n % 10 ;
            sum += rem ;
            product *= rem ;
            n = n / 10 ;
        }
        return (sum + product) ;
    }
public:
    bool checkDivisibility(int n) {
        if(n % sum_product(n) == 0){
            return true ;
        }
        return false ;
    }
};
