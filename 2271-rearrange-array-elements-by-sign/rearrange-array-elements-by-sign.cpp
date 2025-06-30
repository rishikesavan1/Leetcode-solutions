class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> output;
        for(auto i : nums){
            if(i > 0) pos.push_back(i);
            else neg.push_back(i);
        }
        for(int i = 0 ; i < nums.size()/2 ; i++){
            output.push_back(pos[i]);
            output.push_back(neg[i]);
        }
    return output;
    }
};