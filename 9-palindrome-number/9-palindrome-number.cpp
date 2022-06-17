class Solution {
public:
    bool isPalindrome(int x) 
    {
         int i;
         int j;
        
         string str = to_string(x);
         if(str.size()%2 == 0)
         {
              j = str.size()/2;
              i = j-1;
         }
             
         else
         {
              j = str.size()/2+1;
              i = j-2; 
         }
         while(j<str.size())
         {
             if(str[i] != str[j])
                 return false;
             i--;
             j++;
         }
        return true;
        
    }
};