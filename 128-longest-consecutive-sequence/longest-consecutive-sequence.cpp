class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int longest = 1;
        unordered_set<int> st;

        for(auto i : nums) st.insert(i);

        for(auto x : st){
            if(st.find(x-1) == st.end()){
                int cnt = 1;
                int temp = x;
                while(st.find(temp + 1) != st.end()){
                    temp = temp+1;
                    cnt+=1;
                }
                longest = max(longest , cnt);
            }
        }
        return longest;
    }
};