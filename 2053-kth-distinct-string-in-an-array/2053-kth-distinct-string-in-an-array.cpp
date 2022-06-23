class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) 
    {
        unordered_map<string,int>set;
        for(int i=0;i<arr.size();i++)
            set[arr[i]]++;
        for(int i=0;i<arr.size();i++)
        {
            if(set[arr[i]] == 1)
            {
                k--;
                if(k==0)
                    return arr[i];
            }
        }
        return "";
            
        
        
    }
};