class Solution {
public:
    bool isPerfectSquare(int num) {
        long low = 1, high = num;
        int val = 1;
        while(low <= high){
            int mid = low+(high-low)/2;
            if(1L * mid * mid <= num){
                val = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return val*val == num ? 1 : 0;
    }
};