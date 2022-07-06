class Solution {
public:
    int climbStairs(int n) 
    {
        if(n<4)
            return n;
        int arr[2];
        arr[0]=1;
        arr[1]=2;
        for(int i=2;i<n;i++)
        {
            arr[1]+=arr[0];
            arr[0]=arr[1]-arr[0];
        }
        return arr[1];
    }
};