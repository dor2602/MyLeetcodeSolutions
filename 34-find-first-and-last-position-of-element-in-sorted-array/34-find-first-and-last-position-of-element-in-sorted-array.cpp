class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int firstOccurance = -1;
        while(low<=high){
            int mid = low+(high-low)/2; // To Prevent from overflow
            if(nums[mid]==target && mid == 0){
                firstOccurance = mid;
                break;
            }
            if(nums[mid]==target && nums[mid]>nums[mid-1]){
                firstOccurance = mid;
                break;
            }
            if(nums[mid]==target){
                high = mid-1;
            }
            if(nums[mid]>target){
                high = mid-1;
            }
            if(nums[mid]<target){
                low = mid+1;
            }
        }
        low = 0;
        high = n-1;
        int secondOccurance = -1;
        while(low<=high){
            int mid = low+(high-low)/2; // To Prevent from overflow
            if(nums[mid]==target && mid == n-1){
                secondOccurance = mid;
                break;
            }
            if(nums[mid]==target && nums[mid]<nums[mid+1]){
                secondOccurance = mid;
                break;
            }
            if(nums[mid]==target){
                low = mid+1;
            }
            if(nums[mid]>target){
                high = mid-1;
            }
            if(nums[mid]<target){
                low = mid+1;
            }
        }
        vector<int> result;
        result.push_back(firstOccurance);
        result.push_back(secondOccurance);
        return result;
    }
};