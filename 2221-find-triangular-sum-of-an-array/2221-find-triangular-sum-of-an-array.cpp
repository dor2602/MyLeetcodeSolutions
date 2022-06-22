class Solution {
public:
    int triangularSum(vector<int>& nums) 
    {
        int n = nums.size();
        while(n!=1)
        {
            vector<int>newNums(--n);
            for(int i = 0;i<newNums.size();i++)
                newNums[i] = (nums[i] + nums[i+1])%10;
            nums.resize(n-1);
            nums=newNums;
        }
       return nums[0]; 
    }
};