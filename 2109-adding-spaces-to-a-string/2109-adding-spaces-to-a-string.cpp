class Solution 
{
public:
    string addSpaces(string s, vector<int>& spaces) 
    {
        string str = "";
        int i = -1;
        int j = 0;
        while (i != s.size())
        {
            if (j < spaces.size())
            {
                while (j != spaces.size() && spaces[j] > i + 1)
                {
                    str += s[i+1];
                    i++;
                }
                j++;
                str += " ";
                if (j == spaces.size()) i++;
                
            }
            if (j == spaces.size()) str += s[i++];   
         }
         return str;
    }
};