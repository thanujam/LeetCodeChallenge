class Solution {
public:
    int rowSize;
    int colSize;
    int oldColor;
    int newColor;
    
    vector<vector<int>> funcFill(vector<vector<int>>& image, int sr, int sc);
        
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        rowSize = image.size();
        colSize = image[0].size();
        oldColor = image[sr][sc];
        Solution:: newColor = newColor;
        
        if(oldColor == newColor)
            return image;
              
        return funcFill(image, sr, sc);
    }
};

vector<vector<int>> Solution :: funcFill(vector<vector<int>>& image, int sr, int sc)
{
    if(image[sr][sc] == oldColor)
        image[sr][sc] = newColor;

    //Down
    if(sr + 1 < rowSize && image[sr + 1][sc] == oldColor)
        funcFill(image, sr + 1, sc);
    
    //Up
    if(sr - 1 >= 0 && image[sr - 1][sc] == oldColor)
        funcFill(image, sr - 1, sc);
    
    //Right
    if(sc + 1 < colSize && image[sr][sc + 1] == oldColor)
        funcFill(image, sr, sc + 1);
    
    if(sc - 1 >= 0 && image[sr][sc - 1] == oldColor)
        funcFill(image, sr, sc - 1);
    
    return image;
}
