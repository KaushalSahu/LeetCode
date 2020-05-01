// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if (n < 2) {
            return n;
        }
        int low = 1, high = n, mid;
        while (low <= high) {
            mid = low + (high - low) / 2; 
            if (isBadVersion(mid) == true && isBadVersion(mid - 1) == false) {
                return mid;
            }
            else if (isBadVersion(mid - 1))
                high = mid - 1;
            else 
                low = mid + 1;
        }
        return 0;
    }
};
