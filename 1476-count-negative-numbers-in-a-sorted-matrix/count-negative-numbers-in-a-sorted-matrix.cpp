class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt = 0 , idx = -1;
        for(auto &arr : grid){
            int low = 0, high = grid[0].size()-1;
            while(low<= high){
                int mid = (low+high)/2;
                if(arr[mid] < 0){
                    idx = mid;
                    high = mid-1;
                }                   
                else 
                    low = mid + 1;
            }
            if(idx != -1) cnt += (grid[0].size() - idx);
        }
        return cnt;
    }
};