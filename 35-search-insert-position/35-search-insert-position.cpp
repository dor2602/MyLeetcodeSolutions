class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int high = nums.size();
        int low = 0;
        int mid = (high+low)/2;
        while(high>low)
        {
            int mid = (high+low)/2;
            if(nums[mid]>target)
                high = mid;
            else if(nums[mid]<target)
                low = mid+1;
            else return mid;
        }
        return low;
    }
};