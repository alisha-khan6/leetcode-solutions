class Solution {
private:
    bool valid(char c){
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
            return 1 ;
        }
        return 0 ;
    }
    char lower(char c){
        if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')){
            return c ;
        }else{
            char temp = c - 'A' + 'a' ;
            return temp ;
        }
    }
    bool check(string a){
        int s = 0 ; 
        int e = a.length() - 1;
        while(s <= e){
            if(a[s] != lower(a[e])){
                return 0 ;
            }else{
                s++ ;
                e-- ;
            }
        }
        return 1 ;
    }
public:
    bool isPalindrome(string s) {
        string temp = "" ;
        for(int i = 0 ; i < s.length() ; i++){
            if(valid(s[i])){
                temp.push_back(s[i]) ;
            }
        }
        for(int j = 0 ; j < temp.length() ; j++){
            temp[j] = lower(temp[j]) ;
        }
        return check(temp) ;
    }
};
