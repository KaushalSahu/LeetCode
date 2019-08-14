class Solution {
public:
    void combination(int k, int n, vector<vector<int>> &res, vector<int> &temp, int start) {
        if (n == 0 && k == 0) {
            res.push_back(temp);
            return;
        }
        if (k == 0)
            return;
        for (int i = start; i <= 9 && n > 0; i++) {
            temp.push_back(i);
            combination(k-1, n-i, res, temp, i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> temp;
        combination(k, n, res, temp, 1);
        return res;
    }
};
