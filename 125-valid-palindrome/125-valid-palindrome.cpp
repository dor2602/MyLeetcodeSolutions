class Solution 
{
public:
    bool isPalindrome(string s) 
    {
        if(s == "")
            return true;
        int i;
        string str = "";
        for( i = 0;i<s.size();i++)
        {
            if('a'<=s[i] && s[i]<='z'|| s[i] >='0' && s[i]<='9')
            {
                str+=s[i];
                continue;
            }
            if('A'<=s[i]&& s[i]<='Z')
                str+=tolower(s[i]);
        }
        i=0;
        int j = str.size()-1;
        while(i < j)
            if(str[i++] != str[j--])
                return false;
        return true;
    }
};