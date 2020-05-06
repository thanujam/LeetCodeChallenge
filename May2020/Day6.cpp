class Solution {
public:
    int findCandicate(vector<int>& nums);
    bool majorityElementExist(vector<int>& nums, int ele);
    
    int majorityElement(vector<int>& nums) {
        
        int candidate = findCandicate(nums);
        
        if(majorityElementExist(nums, candidate))
            return candidate;
        else
            return -1;
    }
};

int Solution :: findCandicate(vector<int>& nums)
{
    int index = 0, i, vsize = nums.size(), count = 1;
    for(i = 1; i < vsize; i++)
    {
        if(nums[index] == nums[i])
            count++;
        else 
            count--;
        
        if(count == 0)
        {
            index = i;
            count = 1;
        }
    }
    return nums[index];
}

bool Solution :: majorityElementExist(vector<int>& nums, int ele)
{
    int vsize = nums.size(), count = 0;
    for( int i = 0;i < vsize; i++)
    {
        if(nums[i] == ele)
            count++;
    }
    
    if(count > vsize / 2)
        return true;
    return false;
}
