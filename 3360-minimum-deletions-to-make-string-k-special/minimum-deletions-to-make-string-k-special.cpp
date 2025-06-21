class Solution {
public:
    int minimumDeletions(string word, int k) {
        int mindel = word.size();
        vector <int> count(26,0);
        for(auto c : word) count[c - 'a']++;

        vector<int> arr;
        for(auto a : count) if(a) arr.push_back(a);

        for(auto mid : arr){
            int removcnt = 0;
            for(auto val : arr){
                if(val < mid) removcnt += val;
                else if(val <= mid+k) continue;
                else removcnt += (val-(mid+k));
            }
            mindel = min(mindel , removcnt);
        }
        return mindel;
    }
};