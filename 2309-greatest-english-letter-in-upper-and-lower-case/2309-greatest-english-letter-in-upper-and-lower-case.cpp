class Solution {
public:
    string greatestLetter(string s) 
    {
        int big[26]={0};
        int small[26]={0};
        string str = "";
        string ans = "";
        for(int i = 0;i<s.size();i++)
        {
            if(isupper(s[i]))
            {
                if(small[s[i]+32-'a'])
                     str=s[i];
                else
                {
                    big[s[i]-'A']++;
                    continue;
                }
            }
                
            else if(big[s[i]-32-'A'])
                 str = s[i]-32;
            else
            {
                small[s[i]-'a']++;
                continue;
            }
            ans = max(ans,str);   
        }
        return ans;
    }
};