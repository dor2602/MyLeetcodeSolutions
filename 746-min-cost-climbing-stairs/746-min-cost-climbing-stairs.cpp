class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        if(cost.size()<3) return cost[0]>cost[1]? cost[1]:cost[0];
        int n=cost.size();
        int arr[2];
        arr[0]=cost[0];
        arr[1]=cost[1];
        for(int i=2;i<n;i++)
        {
             swap(arr[0],arr[1]);
             arr[1] = min(arr[0],arr[1])+cost[i];
        }
        return arr[1]>arr[0]? arr[0]:arr[1];
    }
};