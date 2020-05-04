class Solution {
public:
    int findComplement(int num) {
    int bits = log2(num) + 1;
    int mask = pow(2, bits) - 1;
    return num ^ mask;
    }
};
