class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos = 0 , neg = 1;
        vector<int> output(nums.size(),0);
        for(auto i : nums){
            if(i > 0){
                output[pos] = i;
                pos +=2;
            }
            else{
                output[neg] = i;
                neg += 2;
            }
        }
    return output;
    }
};