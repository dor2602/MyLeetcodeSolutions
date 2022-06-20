class Solution {
public:
    unordered_set<int>s;
    bool isHappy(int n) 
    {
        int sum = 0;
        while(n)
        {
           sum += pow(n%10,2);
            n/=10;
        }
        if(sum == 1)
            return true;
        if(s.find(sum)!= s.end())
            return false;
        s.insert(sum);
        return isHappy(sum);
    }
};