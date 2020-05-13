class Solution {
public:
    string removeKdigits(string num, int k) {
        if (num.size() == k) {
            return "0";
        }
        
        int i = 0;
        while (k > 0) {
            if (i != 0) {
                i--;
            }
            while (i < num.size() - 1 && num[i] <= num[i + 1]) {
                i++;
            }
            num.erase(num.begin() + i);
            k--;
        }
        while (num.size() > 1 && num[0] == '0') {
            num.erase(num.begin());
        }
        
        if (num.size() == 0) {
            return "0";
        }
        
        return num;
    }
};
