class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int vsize = coordinates.size();
        if(vsize < 2)
            return true;
        
        int i;
        for(i = 0;i < vsize - 2; i++)
        {
            if((coordinates[i + 2][1] - coordinates[i + 1][1]) * (coordinates[i + 1][0] - coordinates[i][0]) !=
               (coordinates[i + 2][0] - coordinates[i + 1][0]) * (coordinates[i + 1][1] - coordinates[i][1])
              )
                return false;
        }
        return true;
    }
};
