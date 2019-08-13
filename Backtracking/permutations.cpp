class Solution {
public:
    void allpermute(vector<vector<int>> &res, vector<int> &nums, int index) {
        if (index == nums.size()) {
            res.push_back(nums);
            return;
    }
        for (int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            allpermute(res, nums, index+1);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        allpermute(res, nums, 0);
        return res;
    }
};
