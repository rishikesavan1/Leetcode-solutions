class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int> res;
        vector<long> pow2;
        int mod = 1e9 + 7 , i = 0;

        while(n){
            if(n & 1)   pow2.push_back(1L << i);
            n >>= 1;
            i++;
        }

        for(auto &q : queries){
            long long prod = 1;
            for(int j = q[0] ; j <= q[1];j++){
                prod = (pow2[j] * prod) % mod;
            }
            res.push_back(prod);
        }

        return res;
    }
};