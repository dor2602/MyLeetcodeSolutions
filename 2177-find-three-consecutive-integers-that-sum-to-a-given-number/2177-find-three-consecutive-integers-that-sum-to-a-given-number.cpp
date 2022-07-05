class Solution {
public:
    vector<long long> sumOfThree(long long num) 
    {
        vector<long long>v;
        if(num%3 !=0)
            return v;
        long long sum ;
        sum=num/3;
        if(sum + sum-1+sum-2 == num)
            return v={sum-2,sum-1,sum};
        else if(sum+sum+1+sum-1 == num)
            return v={sum-1,sum,sum+1};
        else if(sum+sum+1+sum+2 == num)
            return v={sum,sum+1,sum+2};
        return v;
            
        
    }
};