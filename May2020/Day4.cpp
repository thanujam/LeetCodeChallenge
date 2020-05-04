class Solution {
public:
    int findComplement(int num) {
        int count = 0, temp = num;
        
        //To count number of bits
        while(temp)
        {
            temp = temp / 2;
            count++;
        }
        
        int t = pow(2, count) - 1;
        return t - num;
    }
};
