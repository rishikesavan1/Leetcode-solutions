class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;
        for(auto i : nums)
            if(i > 0)
                st.insert(i);
        int val = 1;
        for(auto i : st){
            if(st.find(val) == st.end()){
                return val;
            }
            val++;
        }
        return val;
    }
};