class Solution {
public:
    bool isPerfectSquare(int num) {
        long low = 1, high = num , val = 0;
        while(low <= high){
            int mid = low+(high - low)/2;
            if(num/mid >= mid){
                val = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return val*val == num ? 1 : 0;
    }
};