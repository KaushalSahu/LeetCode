class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char, int> stones;
        int jewels = 0;
        for (int i = 0; i < S.size(); i++) {
            if (stones.find(S[i]) != stones.end()) {
                stones[S[i]]++;
            } 
            else {
                stones[S[i]] = 1;
            }
        }
        for (int i = 0; i < J.size(); i++) {
            if (stones.find(J[i]) != stones.end()) {
                jewels += stones[J[i]];
            }
        }
        return jewels;
    }
};
