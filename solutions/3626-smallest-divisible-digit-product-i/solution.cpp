class Solution {
public:
    int smallestNumber(int n, int t) {
        // int product = 1 ;
        int ans = 0 ;
        for(int i = n ; i >= n ; i++){
            int product = 1 ;
            int a = i ;
            while(a > 0){
            int rem = a % 10 ;
            product *= rem ;
            a = a / 10 ;
            }
            if(product % t == 0){
                ans = i ;
                break ;
            }
        }
        return ans ;
    }
};
