class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int k=0;
        for(int i=0;i<nums.size();i++)
            if(nums[i] == 0)
                swap(nums[k++],nums[i]);
        for(int i=k;i<nums.size();i++)
            if(nums[i] == 1)
                swap(nums[k++],nums[i]);
        for(int i=k;i<nums.size();i++)
           if(nums[i] == 2)
               swap(nums[k++],nums[i]);
       
        
    }
};