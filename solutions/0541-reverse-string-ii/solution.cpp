class Solution {
public:
    string reverseStr(string s, int k) {
        string s_1 = "";

        for(int start = 0; start < s.length(); start += 2 * k) {

            string temp = "";

            // Take first k characters
            for(int i = start; i < min(start + k, (int)s.length()); i++) {
                temp += s[i];
            }

            // Reverse temp
            for(int i = 0; i < temp.length() / 2; i++) {
                char temp_1 = temp[i];
                temp[i] = temp[temp.length() - i - 1];
                temp[temp.length() - i - 1] = temp_1;
            }

            // Add reversed part
            s_1 += temp;

            // Add next k characters without reversing
            for(int i = start + k; 
                i < min(start + 2 * k, (int)s.length()); i++) {
                s_1 += s[i];
            }
        }

        return s_1;
    }
};
