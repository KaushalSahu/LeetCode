class Solution {
public:
    void build(vector<string> &res, vector<string> &letters, string digits, int i, string temp) {
        if (i == digits.size()) {
            res.push_back(temp);
            return;
        }
        int num = digits[i] - '0';
        for (char ch: letters[num]) {
            build(res, letters, digits, i+1, temp+ch);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if (digits.size() == 0)
            return res;
        vector<string> letters = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string temp;
        build(res, letters, digits, 0, temp);
        return res;
    }
};
