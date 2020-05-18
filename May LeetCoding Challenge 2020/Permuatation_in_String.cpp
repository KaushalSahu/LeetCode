class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int left = 0;
        int right = 0;
        int count = s1.size();
        
        int char_count[26] = {0};
        
        for (char c: s1) {
            char_count[c - 'a']++;
        }
        
        while (right < s2.size()) {
            
            if (char_count[s2[right++] - 'a']-- >= 1)
                count--;

            if (count == 0)
                return true;

            if (right - left == s1.size() && char_count[s2[left++] - 'a']++ >= 0)
                count++;
        }
        return false;
    } 
};
