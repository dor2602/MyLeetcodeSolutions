class Solution 
{
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        for(int i = 0; i<9;i++)
        {
            int arr[9] = {0};
            for(int j = 0;j<9;j++)
            {
                if(board[i][j]=='.')
                    continue;
                if(arr[board[i][j]-1-'0']!=0)
                       return false;
                arr[board[i][j]-1-'0']++;       
            }         
        }
        for(int i = 0; i<9;i++)
            {
                int arr[9] = {0};
                for(int j = 0;j<9;j++)
                {
                   if(board[j][i]=='.')
                     continue;
                   if(arr[board[j][i]-1-'0']!=0)
                     return false;
                   arr[board[j][i]-1-'0']++;
                }           
            }   
        int i = 0, j = 0;
        while (i < 9)
        {
            int arr[9] = {0};
            for (int start = i; start < i+3; start++) 
            {
                
                for (int end = j; end < j+3; end++) 
                {
                    if (board[start][end] == '.') continue;
                    if(arr[board[start][end]-1-'0']!=0)
                      return false;
                    arr[board[start][end]-1-'0']++; 
                }
            }
            j += 3;
            if (j == 9) 
            {
                i += 3;
                j = 0;
            }
        }                               
       return true;                
    }
};
