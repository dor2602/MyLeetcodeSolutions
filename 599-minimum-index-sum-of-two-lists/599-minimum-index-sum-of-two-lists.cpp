class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) 
    {
        unordered_map<string,int>list;
        unordered_map<int,vector<string>>sumIndexes;
        for(int i=0; i<list1.size() ;i++)
            list[list1[i]] = i;
        int indexS = INT_MAX;
        for(int i=0;i<list2.size();i++)
        {
            if(list.find(list2[i]) != list.end())
            {
                if(list[list2[i]]+i <= indexS)
                {
                    indexS = list[list2[i]]+i;
                    sumIndexes[indexS].push_back(list2[i]);
                }
            }
        }
        return sumIndexes[indexS];
    }
};