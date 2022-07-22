class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        unordered_set<int>row,col;
        for(int i=0;i<n;i++)
        {
            row.clear();
            col.clear();
            for(int j=0;j<n;j++)
            {
                row.insert(matrix[i][j]);
                col.insert(matrix[j][i]);
            }
            if((col.size()+row.size())!= 2*n)
                return false;
        }
        return true;
    }
};