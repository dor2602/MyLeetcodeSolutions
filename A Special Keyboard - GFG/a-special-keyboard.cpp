// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int findTime(string S1, string S2) 
    {
        int index=0;
        int sum = 0;
        int reserve_index;
        for(int i = 0 ; i<S2.size();i++)
        {
            reserve_index = S1.find(S2[i]);
            index = abs(index - reserve_index);
            sum += index;
            index = reserve_index;
        }
        return sum;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1,S2;
        cin>>S1;
        cin>>S2;

        Solution ob;
        cout<<ob.findTime(S1,S2)<<endl;
    }
    return 0;
}  // } Driver Code Ends