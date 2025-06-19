class Solution {
public:
    void countingSort(vector<int>& arr) {
    if (arr.empty()) return;
    int maxVal = *max_element(arr.begin(), arr.end());
    vector<int> count(maxVal + 1, 0);
    for (int num : arr) {
        count[num]++;
    }
    int idx = 0;
    for (int i = 0; i <= maxVal; i++) {
        while (count[i]-- > 0) {
            arr[idx++] = i;
        }
    }
}

    int partitionArray(vector<int>& nums, int k) {
        countingSort(nums);
        int ans = 0 , min = nums[0];
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i] - min > k){
                min = nums[i];
                ans+=1;
            }
        }
        return ans+1;
    }
};