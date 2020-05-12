class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;  // to avoid interger overflow
            int isEven = (right - mid) % 2;
            if (nums[mid] == nums[mid - 1]) {
                if (isEven == 0) {
                    right = mid - 2;
                }
                else {
                    left = mid + 1;
                }
            } 
            else if (nums[mid] == nums[mid + 1]) {
                if (isEven == 0) {
                    left = mid + 2;
                }
                else {
                    right = mid - 1;
                }
            }
            else {
                return nums[mid];
            }
        }
        return nums[left]; // if left == right means it is the single element
    }
};
