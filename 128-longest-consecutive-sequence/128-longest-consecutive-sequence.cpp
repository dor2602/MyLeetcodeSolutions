class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int>s;
        int longSeq = 0;
        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]);
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i]-1) == s.end())
            {
                int currSeq = 0;
                int k=0;
                while(s.find(nums[i]+k) != s.end())
                {
                    currSeq++;
                    k++;
                }
                longSeq = max(longSeq,currSeq);
            }
        }
        return longSeq;
    }
};