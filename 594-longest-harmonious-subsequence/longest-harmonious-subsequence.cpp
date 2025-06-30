class Solution {
public:
    int findLHS(vector<int>& nums) {
        int sol = 0;
        map<int,int> mp;
        for(auto i : nums) mp[i]++;
        for(auto [i,f] : mp){
            if(mp.find(i+1) != mp.end()){
                sol = max (sol , mp[i] + mp[i+1]);
            }
        }
        return sol; 
    }
};