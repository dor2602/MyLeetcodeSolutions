class Solution {
public:
    string decodeMessage(string key, string message) 
    {
        vector<int>v(26,0) ;
        int alphabet = 0;
        for(int i=0;i<key.size();i++) 
        {
            if(key[i] != ' ' && v[key[i]-'a'] == 0)
                {
                    v[key[i]-'a'] = 'a'+alphabet;
                    alphabet++;
                } 
        }
        for(int i=0;i<message.size();i++)
        {
            if(message[i] != ' ')
                message[i] = v[message[i]-'a'];
        }
    return message;
        
    }
};