class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        if(cost.size()<3) return cost[0]>cost[1]? cost[1]:cost[0];
        int n=cost.size();
        int arr[n];
        arr[0]=cost[0];
        arr[1]=cost[1];
        for(int i=2;i<n;i++)
            arr[i] = min(arr[i-1],arr[i-2])+cost[i];
        return arr[n-1]>arr[n-2]? arr[n-2]:arr[n-1];
    }
};