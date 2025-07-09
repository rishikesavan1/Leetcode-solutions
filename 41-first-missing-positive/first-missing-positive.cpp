class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;
        int f = 0;
        for(auto i : nums){
            if(i == 1)
                f = 1;
            if(i > 0)
                st.insert(i);
        }
        if(f == 0)
            return 1;
        int val = 1;
        for(auto i : st){
            if(st.find(val) == st.end())
                return val;
            val++;
        }
        return val;
    }
};