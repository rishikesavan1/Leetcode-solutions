class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0 , diff = 0;
        int prefsum = 0;
        unordered_map<int,int> mp = {{0,1}};
        for(auto a : nums){
            prefsum += a;
            diff = prefsum-k;
            cnt += mp[diff];
            mp[prefsum] =mp[prefsum]+1;
        }
        return cnt;
    }
};
// auto init = atexit([]() {ofstream("display_runtime.txt") << "0"; });