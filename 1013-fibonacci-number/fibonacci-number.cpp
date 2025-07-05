class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1; 
        vector<int> fib = {0,1,1};
        for(int i = 3; i <= n;i++){
            fib.push_back(fib[i-1]+fib[i-2]);
        }
        return fib.back();
    }
};