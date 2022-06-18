// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    int MaxGold(vector<vector<int>>&matrix)
    {
    int ans = 0; 
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i=0 ; i<m ; i++)
        ans = max(matrix[0][i], ans);
    
    for(int i=1 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(matrix[i][j] == -1)
                continue ;
            int v = matrix[i][j];
            matrix[i][j] = -1;
            
            if(j-1 >= 0 && matrix[i-1][j-1] != -1)
                matrix[i][j] = max(matrix[i][j], matrix[i-1][j-1] + v);
                
            if(matrix[i-1][j] != -1)
                matrix[i][j] = max(matrix[i][j], matrix[i-1][j] + v);
                
            if(j+1 < m && matrix[i-1][j+1] != -1)
                matrix[i][j] = max(matrix[i][j],matrix[i-1][j+1] + v);
            ans = max(ans, matrix[i][j]);
        }
    }
    return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int m, n;
		cin >> m >> n;
		vector<vector<int>>matrix(m, vector<int>(n, 0));
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++)
				cin >> matrix[i][j];
		}
		Solution obj;
		int ans = obj.MaxGold(matrix);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends