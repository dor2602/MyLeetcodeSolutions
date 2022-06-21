class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int low = 0;
        int high = nums.size();
        while(high>low)
        {
            int mid = low +(high-low)/2;
            if(nums[mid]>target)
                high = mid;
            else if(nums[mid]<target)
                low = mid+1;
            else return mid;
        }
        return -1;
        
    }
};