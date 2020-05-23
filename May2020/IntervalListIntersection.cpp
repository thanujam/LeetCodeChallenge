class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> res;
        int i = 0, j = 0;
        int n1 = A.size(), n2 = B.size();
        
        if(n1 == 0 || n2 == 0)
            return res;
        
        
        for(; i<n1 && j<n2; )
        {
            int a, b;
            a = max(A[i][0],B[j][0]);
            b = min(A[i][1],B[j][1]);
            
            if(a <= b)
            {
                vector<int> r;
                r.push_back(a);
                r.push_back(b);
                res.push_back(r);
            }
                        
            if(A[i][1] < B[j][1])
                i++;
            else
                j++;
        }
        
        return res;
    }
};
