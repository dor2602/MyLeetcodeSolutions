class Solution {
public:
    int fib(int n) 
    {
        if(n == 0 || n==1)
            return n;
        int arr[2];
        arr[0]=0;
        arr[1]=1;
        for(int i=2;i<=n;i++)
        {
            swap(arr[1],arr[0]);
            arr[1] = arr[1]+arr[0];
        }
        return arr[1];
    }
};