class Solution {
public:
    string toLowerCase(string s) 
    {
        for(int i = 0;i<s.size();i++)
            if('A'<=s[i] && s[i]<='Z')
                s[i] = s[i] + 32;     
        return s;
    }
};