class Solution 
{
public:
    void reverseString(vector<char>& s) 
    {
        int i=0;
        while(i<(s.size()/2))
            swap(s[s.size()-1-i],s[i++]);
    }
};