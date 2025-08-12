class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i : nums) mp[i]++;
        for(auto [k,v] : mp){
            if(v == 1) return k;
        }
        return -1;
    }
};