class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0 , maxi = INT_MIN;
        for(auto i : nums){
            sum += i;
            if(sum < 0) sum = 0;
            if(sum > maxi) maxi = sum; 
        }
        if(maxi <= 0) {
            sort(nums.begin(),nums.end());
            return nums.back();
        };
        return maxi;
    }
};