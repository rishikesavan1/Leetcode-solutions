class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0 , cnt2 = 0 , el1 = INT_MIN, el2 = INT_MIN;
        for(auto i : nums){
            if(cnt1 == 0 && el2 != i){
                cnt1 = 1;
                el1 = i;
            }
            else if(cnt2 == 0 && el1 != i){
                cnt2 = 1;
                el2 = i;
            }
            else if(el1 == i) cnt1++;
            else if(el2 == i) cnt2++;
            else{
                cnt1 --;
                cnt2 --;
            }
        }
        
        vector<int> ans;
        cnt1 = 0 , cnt2 = 0;
        int maj = nums.size() /3;
        for(auto i : nums){
            if(i == el1) cnt1++;
            if(i == el2) cnt2++;
        }

        if(cnt1 > maj) ans.push_back(el1);
        if(cnt2 > maj) ans.push_back(el2);

        return ans;
    }
};