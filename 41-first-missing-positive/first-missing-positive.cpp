class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int val ;
        bool flag = 0;
        int n = nums.size();
        for(auto i : nums)
            if(i == 1){
                flag = 1;
                break;
            }

        if(flag == 0)
            return 1;
        if(nums.size() == 1) return 2;
        for(int i = 0 ; i < n;i++){
            if(nums[i] <= 0 || nums[i] > n){
                nums[i] = 1;
            }
        }

        for(int i = 0 ; i <n ;i++){
            int x = abs(nums[i]);
            if(nums[x-1] > 0) nums[x-1] *= -1;
        }

        for(int i = 0 ; i < n;i++){
            if(nums[i] > 0){
                return i+1;
            }
        }

        return n+1;
    }
};