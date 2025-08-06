class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int maj = nums.size() / 3;
        unordered_map<int,int> mp;
        vector<int> ans;
        for(auto i : nums) mp[i]++;
        for(auto [k,v] : mp){
            if(v > maj)
                ans.push_back(k);
        }
        return ans;
    }
};