class Solution {
public:
    int missingNumber(vector<int>& nums) 
    { 
       long long int sum = 0;
        int n = nums.size();
        for(int i = 0;i<nums.size();i++)
            sum+=nums[i];
        return (n*(n+1))/2 - sum;
        
    
        
    }
};