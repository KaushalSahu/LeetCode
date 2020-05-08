class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size() == 0) {
            return false;
        }
        
        double x0 = coordinates[0][0];
        double y0 = coordinates[0][1];
        
        double slope = INT_MIN;
        for (int i = 1;  i < coordinates.size(); i++) {
            double x1 = coordinates[i][0];
            double y1 = coordinates[i][1];
            
            if (x1 - x0 == 0)
                return false;
            
            if (slope == INT_MIN) {
                slope = (y1 - y0) / (x1 - x0);
                continue;
            }
            
            double slope2 = (y1 - y0) / (x1 - x0);
            
            if(slope != slope2) {
                return false;
            }
        }
        return true;
    }
};
