class Solution {
public:
    bool isPalindrome(string s) {
        int b = 0 , e = s.size()-1;
        while(b<=e){
            if(!isalnum(s[b])) {
                b++;
                continue;
            }
            if(!isalnum(s[e])) {
                e--;
                continue;
            }
            if(tolower(s[b]) != tolower(s[e])) return 0;
            else{
                b++;
                e--;
            }
        }
        return 1;
    }
};