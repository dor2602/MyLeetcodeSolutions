class Solution {
public:
    int uniquePaths(int m, int n) 
    {
        int arr[m][n];
        for(int i = 0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if( !j || !i )
                {
                    arr[i][j] = 1;
                    continue;
                }
                arr[i][j] = arr[i-1][j]+arr[i][j-1];
            }
        }
        return arr[m-1][n-1];
    }
};