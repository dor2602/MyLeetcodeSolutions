class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int curr_max=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            curr_max = max(sum,curr_max);
            if(sum<0) sum=0;
        }
        return curr_max;
    }
};