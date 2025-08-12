// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long low = 1, high = n, bad = 0, mid = 0;
        while(low <= high){
            mid = (low+high)/2;
            if(isBadVersion(mid)){
                bad = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return bad;
    }
};