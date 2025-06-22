class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.size();
        vector<string> ss;
        if(n%k){
            int rem = k - (n%k);
            cout << n%k;
            while(rem){
                s.push_back(fill);
                rem--;
            }
        }
        for(int i = 0 ; i < n ; i+= k){
            ss.push_back(s.substr(i,k));
        }
        return ss;
    }
};