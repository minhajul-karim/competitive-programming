class Solution
{
    public:
        int longestCommonSubsequence(string text1, string text2)
        {
            
            int lenOfText1 = text1.length(), lenOfText2 = text2.length();

            // Declare the matrix
            int matrix[lenOfText2 + 1][lenOfText1 + 1];
            int row = 0, col = 0;

            // Fill the 1st row with 0
            for (col = 0; col <= lenOfText1; col++)
            {
                matrix[0][col] = 0;
            }

            // Fill the 1st col with 0
            for (row = 0; row <= lenOfText2; row++)
            {
                matrix[row][0] = 0;
            }

            // Calculation
            for (int i = 0; i < lenOfText2; i++)
            {
                for (int j = 0; j < lenOfText1; j++)
                {
                    if (text1[j] != text2[i])
                    {
                        matrix[i + 1][j + 1] = max(matrix[i + 1][j], matrix[i][j + 1]);
                    }

                    else
                    {
                        matrix[i + 1][j + 1] = matrix[i][j] + 1;
                    }

                }

            }

            return matrix[lenOfText2][lenOfText1];
        }
};
