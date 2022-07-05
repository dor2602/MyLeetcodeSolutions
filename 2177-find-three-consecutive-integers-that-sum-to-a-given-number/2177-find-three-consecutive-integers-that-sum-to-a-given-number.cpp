class Solution {
public:
    vector<long long> sumOfThree(long long num) 
    {
        vector<long long>v;
        if(num%3 !=0)
            return v;
        long long sum ;
        sum=num/3;
        if(sum+sum+1+sum-1 == num)
            return v={sum-1,sum,sum+1};
        return v;
    }
};