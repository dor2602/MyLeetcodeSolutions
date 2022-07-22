class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        
        for(int i=0;i<n;i++)
        {
            unordered_set<int>row,col;
            for(int j=0;j<n;j++)
            {
                row.insert(matrix[i][j]);
                col.insert(matrix[j][i]);
            }
            if(col.size()!= n || row.size()!=n)
                return false;
        }
        return true;
    }
};