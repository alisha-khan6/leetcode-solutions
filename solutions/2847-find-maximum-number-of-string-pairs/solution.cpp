class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size() ;
        int count = 0 ;
        unordered_set<string> s ;
        for(string ele : words){
            s.insert(ele) ;
        }
        for(int i = 0 ; i < n ; i++){
            string rev = words[i] ;
            reverse(rev.begin() , rev.end()) ;
            if(words[i] == rev) continue ;
            if(s.find(rev) != s.end()){
                count++ ;
                s.erase(words[i]) ;
            }
        }
        return count ;
        // for(int i = 0 ; i < n ; i++){
        //     for(int j = i + 1 ; j < n ; j++){
        //         if(words[i] == reverse(words[j])) 
        //             count++ ;
        //     }
        // }
        // return count ;
    }
};
