class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        
        if (target < nums[0])
            return 0;
        if (target > nums[n - 1])
            return n;
        
        int low = 0, mid, high = n;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid - 1] < target && nums[mid] > target)
                return mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid;
        }
        return 0;
    }
};
