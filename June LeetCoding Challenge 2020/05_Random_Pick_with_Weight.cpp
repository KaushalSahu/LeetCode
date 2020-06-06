class Solution {
public:
    Solution(vector<int> w) {
        sum = 0;
        for(const auto& num : w)
        {
            sum += num;
            presums.push_back(sum);
        }
    }
    
    int pickIndex() {
        int len = presums.size(), lo = 0, hi = len - 1, r = rand() % sum + 1;
        while(lo < hi)
        {
            int mid = lo + (hi - lo) / 2;
            if(presums[mid] > r)hi = mid;
            else if(presums[mid] < r)lo = mid + 1;
            else return mid;
        }
        return lo;
    }
    
private:
    vector<int> presums;
    int sum;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
