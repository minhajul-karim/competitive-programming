class Solution
{
public:
    int countSquares(vector<vector<int>> &matrix)
    {
        int rows = matrix.size(), cols = matrix[0].size(), counter = 0, i, j; 
        
        // Declare a new matrix for DP
        int dp[rows + 1][cols + 1];
        
        // Fill the 1st row & col with 0
        for (i = 0; i < rows + 1; i++)
        {
            dp[i][0] = 0;
        }
        
        for (i = 0; i < cols + 1; i++)
        {
            dp[0][i] = 0;
        }
        
        // Travarse the dp array
        for (i = 1; i < rows + 1; i++)
        {
            for (j = 1; j < cols + 1; j++)
            {
                if (matrix[i - 1][j - 1] == 1)
                {
                    // Minimum of left, top-left, & top + 1
                    dp[i][j] = min(dp[i][j - 1], min(dp[i - 1][j - 1], dp[i - 1][j])) + 1;
                }
                
                else
                {
                    dp[i][j] = matrix[i - 1][j - 1];   
                }
                
                counter += dp[i][j];
            }
        }
        
        return counter;
        
    }
};
