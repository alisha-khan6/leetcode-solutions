class Solution {
public:
    long long countCommas(long long n) {
        long long totalCommas = 0;
        long long threshold = 1000;

        // Every time n is greater than or equal to a threshold, 
        // all numbers from that threshold up to n get an extra comma.
        while (n >= threshold) {
            totalCommas += (n - threshold + 1);
            threshold *= 1000;
        }

        return totalCommas;
    }
};
