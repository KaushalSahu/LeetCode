class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> ans;
        
        sort(people.begin(), people.end(), [](const vector<int>& a, const vector<int>& b) {
            return (a[0] > b[0] || (a[0] == b[0] && a[1] < b[1]));
        });
        
        for (auto itr : people) {
            ans.insert(ans.begin() + itr[1], itr);
        }
        
        return ans;
    }
};
