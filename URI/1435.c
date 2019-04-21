#include <stdio.h>

int main()
{
    int M[120][120];
    int n, i, j, j_counter, k;

    while(scanf("%d", &n) == 1)
    {
        if (n == 0)
        {
            //printf("\n");
            break;
        }

        int base = 1, start = 0, end = n - 1;
        int lim = (n / 2) + 1;//3

        ///Calculation
        for (i = 1; i <= lim && start <= end; i++)//i=1,2
        {
            //if (i == 4) break;
                if (start == end)
                {
                    M[start][end] = lim;
                    break;
                }

            //
            int dif = end - start;//3,1
            for (j = start; j < n; j += dif)//0,1,2
            {
                j_counter++;
                if (j_counter > 2)
                    break;
                for (k = start; k <= end; k++)//1-2
                {
                    M[j][k] = base;
                    M[k][j] = base;
                }
            }
            //break;
            start++;//1
            end--;//2
            base++;//2
            j_counter = 0;
        }

        ///Print
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j == 0 || M[i][j] > 9)
                    printf("  %d", M[i][j]);
                else
                    printf("   %d", M[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

