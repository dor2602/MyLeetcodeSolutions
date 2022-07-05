class Solution {
public:
    vector<long long> sumOfThree(long long num) 
    {
        vector<long long>v;
        if(num/3-1 + num/3 + num/3+1 == num) return v={num/3-1,num/3,num/3+1};   
        return v;
    }
};