class Solution 
{
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord)
    {
        vector<vector<string>>v1;
        sort(products.begin(), products.end());   
        int i = 0;
        string str = "";
        while (i != searchWord.size())
        {
            vector<string>v;
            int count = 0;
            str += searchWord[i];
            for (int j = 0; j < products.size(); j++)
            {
                if (products[j].substr(0,i+1) == str && count < 3)
                {
                    count++;
                    v.push_back(products[j]);
                }
            }
            v1.push_back(v);
            i++;
         }
        return v1;
     }
};