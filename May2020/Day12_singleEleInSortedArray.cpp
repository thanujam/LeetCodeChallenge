class Solution {
public:
    int searchElem(vector<int>& nums, int low, int high);
    
    int singleNonDuplicate(vector<int>& nums) {
        int vsize = nums.size();
      
        return searchElem(nums, 0, vsize - 1);
    }
};

int Solution :: searchElem(vector<int>& arr, int low, int high)
{
    if (low > high) 
       return -1; 
  
    if (low==high) 
    { 
        //printf("The required element is %d ", arr[low]); 
        return arr[low]; 
    } 
  
    // Find the middle point 
    int mid = (low + high) / 2; 
  
    // If mid is even and element next to mid is 
    // same as mid, then output element lies on 
    // right side, else on left side 
    if (mid%2 == 0) 
    { 
        if (arr[mid] == arr[mid+1]) 
            return searchElem(arr, mid+2, high); 
        else
           return searchElem(arr, low, mid ); 
    } 
    else  // If mid is odd 
    { 
        if (arr[mid] == arr[mid-1]) 
            return searchElem(arr, mid+1, high); 
        else
           return searchElem(arr, low, mid-1); 
    } 

    return 0;
}
