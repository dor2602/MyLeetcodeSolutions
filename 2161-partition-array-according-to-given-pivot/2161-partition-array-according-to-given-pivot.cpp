class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) 
    {
        int n = nums.size();
        vector<int> res(n, pivot);
        int ptr = 0;
        for(int i=0; i<n; i++)
        if(nums[i]<pivot)
            res[ptr++] = nums[i];
         ptr = n-1;
        for(int i=n-1; i>=0; i--)
            if(nums[i]>pivot)
                res[ptr--] = nums[i];
        return res;
    }
};