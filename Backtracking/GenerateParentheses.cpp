class Solution {
public:
    void generateparen(vector<string> &res, string str, int n, int m) {
        if (n == 0 && m == 0) {
            res.push_back(str);
            return;
        }
        if (n > 0)
            generateparen(res, str + "(", n - 1, m + 1);
        if (m > 0)
            generateparen(res, str + ")", n, m - 1);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        generateparen(res, "", n, 0);
        return res;
    }
};
