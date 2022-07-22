class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        int sum=0, maxi=0;
        unordered_map<int,int> map;
        map[0] = -1;
        for(int i=0; i<nums.size(); i++)
        {
            sum += nums[i]==1 ? 1 : -1;
            if(map.find(sum) != map.end()) maxi = max(maxi, i-map[sum]);
            else map[sum] = i;
        }
        return maxi;
    }
};