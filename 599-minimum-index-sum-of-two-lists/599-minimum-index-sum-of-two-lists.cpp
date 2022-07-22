class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) 
    {
        unordered_map<string,int>list;
        for(int i=0; i<list1.size() ;i++)
            list[list1[i]] = i;
        int indexS = INT_MAX;
        unordered_map<int,vector<string>>v ;
        for(int i=0;i<list2.size();i++)
        {
            if(list.find(list2[i]) != list.end())
            {
                if(list[list2[i]]+i <= indexS)
                {
                    indexS = list[list2[i]]+i;
                    v[indexS].push_back(list2[i]);
                }
            }
        }
        return v[indexS];
    }
};