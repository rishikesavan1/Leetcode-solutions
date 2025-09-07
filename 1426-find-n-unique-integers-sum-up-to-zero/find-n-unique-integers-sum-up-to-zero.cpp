class Solution {
public:
    vector<int> sumZero(int n){
        vector<int> ans;
        int pos = 1, neg = -1; 
        for(int i = 0 ; i < n/2; i++){
            ans.push_back(neg--);
            ans.push_back(pos++);
        }
        if(n%2){
            ans.push_back(0);
        }
        return ans;
    }
};