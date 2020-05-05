class Solution {
public:
    int firstUniqChar(string s) {
        int a[256], i , len = s.length(), index = INT_MAX;
        
        for(i =  0;i < 256; i++)
        {
            a[i] = -1;
        }
        
        for(i = 0;i < len; i++)
        {
            if(a[s[i]] == -1)
                a[s[i]] = i;
            else 
                a[s[i]] = -2;
        }
        
        for(i = 0;i < 256; i++)
        {
            if(a[i] >= 0)
            {
                index = min(index, a[i]);
            }
        }
        
        if(index == INT_MAX)
            return -1;
        else
            return index;
    }
};
