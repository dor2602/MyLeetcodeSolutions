class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string>>set;
        vector<vector<string>>Anagrams;
        for(int i=0;i<strs.size();i++)
        {
            string temp= strs[i]; 
            sort(temp.begin(), temp.end());
            set[temp].push_back(strs[i]);
        }
        for(auto it:set)
            Anagrams.push_back(it.second);
        return Anagrams;
    }
};