// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       int NW_matrix[n+1][W+1] ;
       for (int i = 0; i <= n ; i++)
           NW_matrix[i][0] = 0;
       for (int i = 0; i < W + 1; i++)
           NW_matrix[0][i] = 0;
       for (int i = 1; i <=n; i++)
           for (int w = 1; w <= W; w++)
               if (wt[i - 1] <= w)
                   NW_matrix[i][w] = max(NW_matrix[i-1][w], val[i - 1] + NW_matrix[i-1][w-wt[i-1]]);
               else NW_matrix[i][w] = NW_matrix[i-1][w]; 
       return NW_matrix[n][W];
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends