class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int count[N + 1];
        memset (count, 0, sizeof(count));
        
        
        for (auto item : trust) {
            count[item[0]]--;
            count[item[1]]++;
        }
        
        for (int i = 1; i <= N; i++) {
            if (count[i] == (N - 1)) {
                return i;
            }
        }
        return -1;
    }
};
