class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        double maxi = 0;
        int area = 0;
        for(int i = 0; i < d.size();i++){
            double temp = sqrt(d[i][0]*d[i][0] + d[i][1]*d[i][1]);
            if(maxi < temp ||(maxi == temp && d[i][0]*d[i][1] > area)){
                maxi = temp;
                area = d[i][0]*d[i][1];
            }
        }
        return area;
    }
};