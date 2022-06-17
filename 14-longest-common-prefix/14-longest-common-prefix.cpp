class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if(strs.size() == 0)
            return "";
        if(strs.size() == 1)
            return strs[0];
        int n = strs.size();
        sort(strs.begin(),strs.end());
        int e = min(strs[0].size(),strs[strs.size()-1].size());
        string str = strs[0], str1 = strs[strs.size()-1];
        int i = 0;
        while(i < e && str[i] == str1[i])
            i++;
        string str2 = str.substr(0,i);
        return str2;
        
    }
};