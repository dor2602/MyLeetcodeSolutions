class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        if(nums.size() == 0 || (nums[0] == val && nums.size() == 1)) 
            return 0;
        int j = nums.size()-1;
        for(int i = 0;i<nums.size();i++)
        {
            if(val == nums[i])
            {
                swap(nums[i],nums[j]);
                j--;
                i--;
            }
            if(i>=j)
                break;
        }
        return j+1;
    }
};