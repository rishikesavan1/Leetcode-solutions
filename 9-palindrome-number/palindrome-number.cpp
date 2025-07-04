class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 ||(x%10 == 0 && x!= 0)){
            return 0;
        }
        return x == reverseint(x);
    }
    int reverseint(int x){
        int rem = 0;
        long long ans = 0;
        while(x > 0){
            rem = x % 10;
            ans =ans * 10 + rem;
            if(ans > INT_MAX && ans < INT_MIN) return 0;
            x/= 10;
        }
        return ans;
    }
};