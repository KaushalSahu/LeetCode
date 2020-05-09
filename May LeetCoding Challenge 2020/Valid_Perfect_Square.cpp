class Solution {
public:
    bool isPerfectSquare(int num) {
        //long long int i = 1;
        for (long long int i = 1; i * i <= num; i++) {
            if (i * i == num)
                return true;
        }
        return false;
    }
};
