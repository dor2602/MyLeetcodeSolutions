class Solution {
public:
    bool isPowerOfThree(int n) 
    {
        if(n <= 0 || n%3==2)
            return false;
        while(n>1)
        {
            if(n%3)
                return false;
            n/=3;
        }
        return true;
    }
};