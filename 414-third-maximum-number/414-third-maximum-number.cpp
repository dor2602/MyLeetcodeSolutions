class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        priority_queue<int,vector<int>> pQ;
        unordered_set<int>s;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxi)
                maxi=nums[i];
            s.insert(nums[i]);
        }
        if(s.size()<3)
            return maxi;
        for (auto itr : s)
            pQ.push(itr);
        pQ.pop();
        pQ.pop();
       return pQ.top();
    }
};