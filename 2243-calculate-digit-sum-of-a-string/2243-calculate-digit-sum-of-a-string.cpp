class Solution {
public:
    string digitSum(string s, int k) 
    {
        while(k<s.size())
        {
                string replace = "";
                for(int i=0; i<s.size(); i+=k)
                {
                    string str = s.substr(i,i + k > s.size()-1? s.size()-i:k);
                    int size = str.size();
                    int sum=0;
                    while(size--)
                        sum+=str[size]-'0';
                    replace+=to_string(sum);
                }
                s=replace;
        }
        return s;
    }
};