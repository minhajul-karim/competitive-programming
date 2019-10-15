#include <stdio.h>

int main(void)
{
    int i, j, n;

    while (scanf("%d", &n) != EOF)
    {
        int M[n][n], st = 0, end = n - 1;
        int dif, square = 0, inner_part = n / 3;
        while (st <= end)
        {
            ///Counting the number of squares
            square++;

            ///Calculation for central element
            if (st == end)
            {
                M[st][end] = 4;
                break;
            }

            dif = end - st;///2
            int count = 0;
            for (i = st; ;i += dif)
            {
                count++;
                if (count > 2)
                    break;
                for (j = st; j <= end; j++)
                {
                    if (square > inner_part)
                    {
                        M[i][j] = 1;
                        M[j][i] = 1;
                    }
                    else
                    {
                        if (i == st && j == st)
                        {
                            M[i][j] = 2;
                        }
                        else if (i == st && j == end)
                        {
                            M[i][j] = 3;
                            M[j][i] = 3;
                        }
                        else if (i != st && j == st)
                        {
                            M[i][j] = 3;
                            M[j][i] = 3;
                        }
                        else if (i != st && j == end)
                        {
                            M[i][j] = 2;
                            M[j][i] = 2;
                        }
                        else
                        {
                            M[i][j] = 0;
                            M[j][i] = 0;
                        }
                    }
                }
            }
            st++;
            end--;
        }

        ///Print
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d", M[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
