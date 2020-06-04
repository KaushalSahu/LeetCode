class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n = s.size();
        if (n == 0) {
            return;
        }
        
        int start = 0, end = n - 1;
        char temp;
        
        while (start <= end) {
            swap(s[start++], s[end--]);
        }
    }
};
