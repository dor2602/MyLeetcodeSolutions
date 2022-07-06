class Solution 
{
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> permutation;
        sort(nums.begin(), nums.end());
        permutation.push_back(nums);
        while(next_permutation(nums.begin(),nums.end()))
            permutation.push_back(nums);
        return permutation;
    }
};