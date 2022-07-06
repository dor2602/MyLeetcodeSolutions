class Solution {
public:
    int tribonacci(int n) 
    {
       int arr[3];
       arr[0]=0;
       arr[1]=1;
       arr[2]=1;
       if(n<3)
           return arr[n];
       for(int i=3;i<n;i++)
       {
           int save=arr[1];
           swap(arr[1],arr[2]);
           arr[2]  = arr[0]+arr[1]+arr[2];
           arr[0]=save;
       }
       return arr[0]+arr[1]+arr[2];
    }
};