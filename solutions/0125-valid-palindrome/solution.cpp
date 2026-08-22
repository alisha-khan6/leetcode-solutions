class Solution {
private:
    bool valid(char c){
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
            return 1 ;
        }else{
            return 0 ;
        }
    }
    char lower(char c){
        if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')){
            return c ;}
            else{
                char ch = c - 'A' + 'a' ;
                return ch ;
            }
    }
    bool palindrome(string s){
        int st = 0 ;
        int end = s.length() - 1 ;
        while(st < end){
            if(s[st] != s[end]){
                return 0 ;
            }else{
                st++ ;
                end-- ;
            }
        }
        return 1 ;
    }
public:
    bool isPalindrome(string s) {
        string temp = "" ;
        for(int i = 0 ; i < s.length() ; i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
        for(int i = 0 ; i < temp.length() ; i++){
            temp[i] = lower(temp[i]) ;
        }
        return palindrome(temp) ;
    }
};
