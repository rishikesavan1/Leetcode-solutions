class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(auto i : nums) mp[i]++;
        for(auto [k,v] : mp){
            if(v > nums.size() / 3)
                ans.push_back(k);
            if(ans.size() == 2) break;
        }
        return ans;
    }
};