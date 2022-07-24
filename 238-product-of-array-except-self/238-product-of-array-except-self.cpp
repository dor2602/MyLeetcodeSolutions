class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int>products(nums.size());
        products[0]=nums[0];
        for(int i=1;i<nums.size();i++)
            products[i]=nums[i]*products[i-1];
        products[nums.size()-1] = products[nums.size()-2]; 
        int num = nums[nums.size()-1];
        for(int i = nums.size()-2;i>=0;i--)
        {
             if(i == 0)
            {
                products[0] = num;
                break;
            }
            products[i] = products[i-1]*num;
            num*=nums[i];
        }
        return products;
    }
};