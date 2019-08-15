class Solution {
public:
    bool isPalindrome(string &s, int start, int end) {
        while (start < end) {
            if (s[start++] != s[end--])
                return false;
        }
        return true;
    }
    void palindrome(vector<vector<string>> &res, string &s, vector<string> &temp, int start) {
        if (start == s.size()) {
            res.push_back(temp);
        }
        else {
            for (int i = start; i < s.size(); i++) {
                if (isPalindrome(s, start, i)) {
                    temp.push_back(s.substr(start, i - start + 1));
                    palindrome(res, s, temp, i+1);
                    temp.pop_back();
                }
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> temp;
        palindrome(res, s, temp, 0);
        return res;
    }
};
