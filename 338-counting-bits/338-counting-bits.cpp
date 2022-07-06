class Solution {
public:
    vector<int> countBits(int n) 
    {
        int count;
        int num;
        vector<int>v;
        for(int i=0;i<n+1;i++)
        {
            num=i;
            count=0;
            while(num>0)
            {
                if(num%2==1)
                    count++;
                num=num/2;
            }
            v.push_back(count);
        }
        return v;
    }
};