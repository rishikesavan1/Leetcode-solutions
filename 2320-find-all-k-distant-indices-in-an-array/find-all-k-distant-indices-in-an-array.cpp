class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        int r = 0,l;
        vector<int> output;
        for(int i = 0 ; i < n ; i++){
            if (nums[i] == key) {
                l = max(r, i - k);
                r = min(n - 1, i + k) + 1;
                for (int j = l; j < r; ++j) {
                    output.push_back(j);
                }
            }
        }
        return output;
    }
};