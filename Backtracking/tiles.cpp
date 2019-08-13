class Solution {
public:
    unordered_set<string> s;
    void permute(string a, int l, int r) 
    { 
        if (l >= 1) 
            s.insert(a.substr(0,l)); 

            for (int i = l; i <= r; i++) { 
                swap(a[l], a[i]); 
                permute(a, l+1, r); 
                swap(a[l], a[i]); 
            } 
    }
    int numTilePossibilities(string tiles) 
    {
        int n = tiles.length();
        permute(tiles, 0, n-1);
        return s.size();
    }
};
