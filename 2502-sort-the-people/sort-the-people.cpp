class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int , string , greater<int>> mp;
        vector<string> output;
        for(int i = 0; i< names.size();i++){
            mp[heights[i]] = names[i];
        }
        for(auto [i,s] : mp){
            output.push_back(s);
        }
    return output;
    }
};