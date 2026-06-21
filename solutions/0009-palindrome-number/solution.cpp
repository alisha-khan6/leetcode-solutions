#include <climits>
class Solution {
public:
    bool isPalindrome(int x) {
        int original = x ;
        if(x < 0){
            return false;
        }
        int reverse = 0 ;
        while (x != 0){
            int rem = x % 10 ;
            if(reverse > INT_MAX/10 || reverse < INT_MIN/10){
                return 0 ;
            }
            reverse = reverse * 10 + rem ;
            x = x / 10 ;
        }
        return (reverse == original);
    }
};
