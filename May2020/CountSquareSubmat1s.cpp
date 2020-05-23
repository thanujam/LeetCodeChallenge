class Solution {
public:
   
    int countSquares(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size(); 
        int res = 0, i, j;
        
        for(i = 1 ;i<row; i++)
        {
            for(j =1; j<col; j++)
            {
                if(matrix[i][j] == 0)
                    continue;
                
                matrix[i][j] = min (min(matrix[i-1][j], matrix[i][j-1]), matrix[i-1][j-1]) + 1;
            }
        }
        
        for(i = 0 ;i<row; i++)
        {
            for(j = 0; j<col; j++)
            {
                res += matrix[i][j];
                
            }
        }
        
        return res;
    }
};
