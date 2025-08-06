class Solution {
public:
    vector<int> generate_row(int r){
        vector<int> row = {1};
        long long ans = 1;
        for(int i = 1 ; i <r ; i++){
            ans *= (r-i);
            ans /= i;
            row.push_back(ans);
        }
        return row;
    }
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans = {{1}};
        for(int i = 2 ; i <= n;i++){
            ans.push_back(generate_row(i));
        }
        return ans;
    }
};