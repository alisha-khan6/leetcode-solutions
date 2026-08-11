class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) {
            return false;
        }
        
        // Divide out all factors of 2, 3, and 5
        int factors[] = {2, 3, 5};
        for (int factor : factors) {
            while (n % factor == 0) {
                n /= factor;
            }
        }
        return n == 1;

    }
};
