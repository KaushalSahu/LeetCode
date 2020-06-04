class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        long totalCost = 0, n = costs.size();
        
        sort(costs.begin(), costs.end(), [](vector<int>& v1, vector<int>& v2) {
            return (v1[0] - v1[1] < v2[0] - v2[1]);
        });
        
        for (int i = 0; i < n / 2; i++) {
            totalCost += costs[i][0] + costs[i + n / 2][1];
        }
        
        return totalCost;
    }
};
