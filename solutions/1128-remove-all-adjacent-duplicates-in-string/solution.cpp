class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st ;
        for(char ch : s){
            if (!st.empty() && st.top() == ch) {
                st.pop(); // Remove adjacent duplicate
            } else {
                st.push(ch);
            }
        }
        string a = "" ;
        while(!st.empty()){
            a += st.top() ;
            st.pop() ;
        }
        reverse(a.begin(), a.end()) ;
        return a ;
    }
};
