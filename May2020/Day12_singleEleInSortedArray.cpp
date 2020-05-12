class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int res = 0, i, vsize = nums.size();
        for(i = 0; i < vsize; i++)
        {
            res = res ^ nums[i];
        }
        return res;
    }
};
