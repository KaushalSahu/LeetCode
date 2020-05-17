class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        
        if (s == "" || s.size() == 0)
            return ans;
        
        int left = 0;
        int right = 0;
        int count = p.size();
        
        int char_count[26] = {0};
        
        for (char c: p) {
            char_count[c - 'a']++;
        }
        
        while (right < s.size()) {
            
            if (char_count[s[right++] - 'a']-- >= 1)
                count--;

            if (count == 0)
                ans.push_back(left);

            if (right - left == p.size() && char_count[s[left++] - 'a']++ >= 0)
                count++;
        }
        return ans;
    }
};
