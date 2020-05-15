class Solution {
public:
    int kadane(vector<int>& A){
        
        int vsize = A.size();
        int max_ending_here = 0, max_so_far =0;
        
        for(int i= 0;i < vsize; i++)
        {
            max_ending_here  += A[i];
            
            max_ending_here = max(max_ending_here, 0);
            max_so_far = max(max_so_far, max_ending_here);
        }
        return max_so_far;
    }
    
    int maxSubarraySumCircular(vector<int>& A) {
        int vsize = A.size(),sum = 0;
        
        int res1 , res2, negRes = INT_MIN;
        
        //Case 1;
        res1 = kadane(A);
        
        //Case2
        for(int i = 0;i < vsize; i++)
        {
            negRes = max(A[i] , negRes);
            sum += A[i];
            A[i] = -A[i];
        }
        
        res2 = kadane(A);
        res2 += sum;
        
        res1 = max(res1, res2);
        
        //Case 3: negative max
        if(res1 == 0)
            return negRes;
        
        return res1;
    }
};
