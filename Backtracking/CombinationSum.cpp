class Solution {
public:
    void totalcombinations(vector<vector<int>> &res, vector<int> &candidates, int target, vector<int> temp, int i) {
        if (target == 0) {
            res.push_back(temp);
            return;
        }
        while ( i < candidates.size() && target > 0) {
            temp.push_back(candidates[i]);
            totalcombinations(res, candidates, target - candidates[i], temp, i);
            temp.pop_back();
            i++;
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        totalcombinations(res, candidates, target, temp, 0);
        return res;
    }
};
