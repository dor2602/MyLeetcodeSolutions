class Solution {
public:
    int lengthOfLastWord(string s){
        int i = s.size()-1;
        while(s[i]== ' ')
            i--;
        int count = 0;   
        for(int j=i ; (j>=0&& s[j] != ' '); j--)  
            count++;
        return count;
    }
};