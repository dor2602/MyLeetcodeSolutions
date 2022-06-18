class Solution 
{
public:
    int isPrefixOfWord(string sentence, string searchWord) 
    {
        int index=1;
        for(int i = 0;i<sentence.size();i++){
            if(sentence[i] == ' ')
            {
                index++;
                continue;
            }
            else
            {
                string str = sentence.substr(i,searchWord.size());
                if(str == searchWord && (i == 0  || sentence[i-1] == ' '))
                    return index;
            }
        }
        return -1;
    }
};
