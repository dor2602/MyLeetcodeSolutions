class Solution {
public:
    bool isValid(string s) 
    {
        stack<char>stacki;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '('||s[i]=='['||s[i]=='{')
                stacki.push(s[i]);
            else if(!stacki.empty())
                if(s[i] == ']'&& stacki.top() == '[')
                    stacki.pop();
                else if(s[i] == '}' && stacki.top()=='{')
                    stacki.pop();
                else if(s[i]==')' && stacki.top()=='(')
                    stacki.pop();
                else return false;
            else return false;
        }
        if(stacki.empty())
            return true;
        return false;
    }
};