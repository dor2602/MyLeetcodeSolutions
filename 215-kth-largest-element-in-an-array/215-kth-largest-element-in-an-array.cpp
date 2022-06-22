class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        priority_queue<int,vector<int>,greater<int>> pQ;
        for(int i=0;i<k;++i)
            pQ.push(nums[i]);
        for(int i=k;i<nums.size();++i)  
            if(nums[i]>pQ.top())
            {
                pQ.pop();
                pQ.push(nums[i]);
            }
        
        return pQ.top();
    }
};