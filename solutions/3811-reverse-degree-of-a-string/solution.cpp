class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0 ;
        for (int i = 0; i < s.length(); ++i) {
            int reverseValue = 26 - (s[i] - 'a');
            int stringPosition = i + 1;
            
            sum += reverseValue * stringPosition;
        }
        return sum ;
    }
};
