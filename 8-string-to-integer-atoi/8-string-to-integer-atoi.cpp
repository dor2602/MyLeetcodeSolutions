class Solution {
public:
    int myAtoi(string s) 
    {
        if(s.size()==0)
            return 0;
        
        int sign = 0;
        long long int num = 0;
        int flag=0;
        long long int check = 0;
        for(int i = 0;i<s.size()-1;i++)
        {
            if(s[i+1]>='0'&&s[i+1]<='9')
            {
                 if(s[i]=='-')
                {
                    sign=1;
                    s[i]=' ';
                    
                }
                else if(s[i] == '+')
                    s[i] = ' ';
                break;
            }
               
        }
            
            
                
        for(int i = 0;i<s.size();i++)
        {
            if(flag == 1)
                break;
            if(s[i] == ' ')
                continue;
            if(s[i]<'0')
                break;
            else if(s[i]>'9')
                break;
            else
            {
                int res =0;
                flag = 1;
                for(int j = i;j<s.size();j++)
                {
                    if(s[j]> '9'||s[j]<'0')
                        break;
                    check=num;
                    if(sign)
                    {
                        if(check*10+s[j]-'0'<=pow(2,31))
                            num = num*10 + s[j] - '0';
                        else
                        {
                            num = pow(2,31);
                            break;
                        }
                        continue;
                            
                    }
                        
                    if(check*10+s[j]-'0'<=pow(2,31)-1)
                        num = num*10 + s[j] - '0';
                    else
                    {
                        num = pow(2,31)-1;
                        break;
                    }
                }
            }
        }
        if(sign)
             return -num;
        return num;
    }
};