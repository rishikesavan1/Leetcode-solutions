class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count = 0;
        vector<int> remtime(61,0);
        for(auto i : time){
            int temp = i%60;
            if(temp == 0)   
                count += remtime[0];
            else    
                count += remtime[60-temp];
            remtime[temp]++;
        }
        return count;
    }
};