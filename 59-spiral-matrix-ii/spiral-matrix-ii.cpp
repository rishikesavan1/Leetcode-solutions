class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> spiral(n,vector<int>(n));
        int val = 1;
        int top =0 , left = 0 , bottom = n-1, right = n-1;
        while(top <= bottom && left <= right){
            for(int i = left ; i <= right ; i++){
                spiral[top][i] = val++;
            }
            top++;
            for(int i = top ; i <= bottom ; i++){
                spiral[i][right] = val++;
            }
            right--;
            if(top <= bottom){
                for(int i = right ; i >= left;i--){
                    spiral[bottom][i] = val++;
                }
                bottom--;
            }
            if(left <= right){
                for(int i = bottom ; i >= top ; i--){
                    spiral[i][left] = val++;
                }
                left++;
            }
        }
        return spiral;
    }
};