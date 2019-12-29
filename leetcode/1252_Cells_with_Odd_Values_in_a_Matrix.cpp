class Solution
{
public:
    int oddCells(int n, int m, vector<vector<int>> &indices)
    {
        
        // Create a (n x m) 2D matrix
        vector<vector<int>> matrix(n, vector<int>(m));
        
        // Variable to keep the count of odd values
        int count = 0;
        
        // Travarse the indices matrix
        for (vector<int> index : indices)
        {
            int i, row = index[0], col = index[1];
            
            // Increment the index[0]th row of Matrix
            for (i = 0; i < m; i++)
            {
                matrix[row][i]++;
                OddValCounter(matrix[row][i], count);
            }
            
            // Increment the index[1]th col of Matrix
            for (i = 0; i < n; i++)
            {
                matrix[i][col]++;
                OddValCounter(matrix[i][col], count);
            }
        }
        
        return count;
        
    }
    
    // Odd counter
    void OddValCounter(int value, int &counter)
    {
        // When the value is odd
        if (value %2 != 0)
        {
            counter++;
        }
        else
        {
            counter--;
        }   
    }
};
