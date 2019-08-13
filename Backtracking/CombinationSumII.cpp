class Solution {
public:
    void combi(vector<vector<int>> &res, vector<int> &candidates, int target, vector<int> &temp, int i) {
        if (target == 0) {
            res.push_back(temp);
            return;
        }
        int prev = -1;
        while (i < candidates.size()) {
            if (prev != candidates[i]) {
            temp.push_back(candidates[i]);
            int x = target - candidates[i];
            if (x >= 0)
                combi(res, candidates, x, temp, i+1);
            temp.pop_back();
            prev = candidates[i];
            }
            i++;
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        combi(res, candidates, target, temp, 0);
        return res;
    }
};
