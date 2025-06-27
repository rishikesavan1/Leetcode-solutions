class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count = 0;
        vector<int> tyme(61,0);
        for(auto i : time){
            int temp = i%60;
            if(temp == 0)   
                count += tyme[0];
            else    count += tyme[60-temp];
            tyme[temp]++;
        }
        return count;
    }
};