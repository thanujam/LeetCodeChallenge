// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int mid=0, low=1, high = n;

        while(low <= high)
        {
            mid = low + (high - low) / 2;
                        
            if(isBadVersion(mid))
            {
                if(mid == 0 || !isBadVersion(mid-1))
                {
                   // cout<<"if if" <<" "<<mid<<" ";
                    return mid;   
                }                  
                else
                {
                   // cout<<"f else "<<mid<<" ";
                    high = mid - 1;
                }
            }
            else
            {
               // cout<<"else "<<mid<<" ";
                low = mid + 1;
            }
        }
        return 0;
    }
};
