class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int high=nums.size();
        int low=0;
        while(high>low)
        {
            int mid = low + (high-low)/2;
            if(target>nums[mid])
                low=mid+1;
            else if(target<nums[mid])
                high=mid;
            else return mid;    
        }
        return low;
    }
};