class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int total_sum = 0;
        int max_sum = INT_MIN;
        int min_sum = INT_MAX;
        int curr_max = 0;
        int curr_min = 0;
        
        for (int num : A) {
            total_sum += num;
            curr_max = max(curr_max + num, num);
            max_sum = max(curr_max, max_sum);
            curr_min = min(curr_min + num, num);
            min_sum = min(curr_min, min_sum);
        }
        
        if (max_sum > 0)
            return max(max_sum, total_sum - min_sum);
        
        return max_sum;
    }
};
