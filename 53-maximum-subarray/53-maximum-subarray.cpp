class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
       int i=0,curr_max=INT_MIN,sum=0;
        for(i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum<=nums[i])
            {
                curr_max=max(curr_max,nums[i]);
                sum=nums[i];
                continue;
            }
            curr_max=max(sum,curr_max);
        }
        return curr_max;
    }
};