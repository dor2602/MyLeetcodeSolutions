class Solution {
public:
    string reverseWords(string s)
{
    string result = "";
    int j = s.size() - 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
            continue;

        string str = "";
        while (i>=0 && s[i] != ' ')
        {
            str += s[i];
            i--;
        }
        
        reverse(str.begin(), str.end());
        if (i > 0)
          result += str + s[i];
        else
            result += str;
        
    }
    if (result[result.size()-1] != ' ')
        return result;
    else return result.substr(0, result.size() - 1);

}
};