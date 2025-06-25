class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i : nums) mp[i]++;
        int val , freq = 0;
        for(auto [i,f] : mp){
            if(f > freq){
                val = i;
                freq = f;
            }
        }
        return val; 
    }
};