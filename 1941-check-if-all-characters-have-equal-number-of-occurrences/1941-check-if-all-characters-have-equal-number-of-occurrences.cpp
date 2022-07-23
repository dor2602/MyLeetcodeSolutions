class Solution {
public:
    bool areOccurrencesEqual(string s) 
    {
        int countArray[26] = {0};
        for(int i=0; i<s.size(); i++)
            countArray[s[i] - 'a']++;
        int firstLetter = countArray[s[0] - 'a'];
        for(int i=0; i<26; i++)
            if(countArray[i] != 0 && countArray[i] != firstLetter)
                return false;
        return true;
    }
};