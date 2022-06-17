class Solution {
public:
    int strStr(string haystack, string needle) 
    {
         if(needle.size()>haystack.size())
          return -1;
        int m = 0;
        while(m != haystack.size())
        {
            string str = haystack.substr(m,needle.size());
            if(str == needle)
                return m;
            m++;
        }
        return -1;
       
    }

};