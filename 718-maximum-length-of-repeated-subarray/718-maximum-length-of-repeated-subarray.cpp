class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) 
    {
        
        
        int n = nums1.size();
        int m = nums2.size();
        int arr[n+1][m+1];
        int maxi = 0;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(!i || !j)
                {
                   arr[i][j] = 0;
                    continue;
                }
                arr[i][j] = 0;
               if(nums1[i-1] == nums2[j-1])
                    arr[i][j] = 1+arr[i-1][j-1];
                maxi = max(maxi,arr[i][j]);
            }
        }
        return maxi;
    }
};