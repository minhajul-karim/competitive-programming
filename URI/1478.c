#include <stdio.h>

int main(void)
{
    int M[110][110];
    int n, i, j, k, dif, border;

    while(scanf("%d", &n) == 1)///n = 4
    {
        int pr_lim = n;
        ///Break point
        if (n == 0)
            break;

        ///Declaration of vars
        int start = 0, end = n - 1;//3
        ///st = 1, end = 2
        while (start <= end)
        {
            if (start == end)
            {
                M[start][end] = 1;
                break;
            }
            else
            {
                dif = end - start;///1
                int counter = 0;
                for (i = start; ; i += dif)///1,2
                {
                    counter++;///1,2
                    if (counter > 2)
                        break;

                    if (i == start)///y
                        border = 0;
                    else
                        border = n + 1;///3

                    for (j = start; j <= end; j++)///1,2
                    {
                        if (i == start)//y
                        {
                            border++;//1,2
                            M[i][j] = border;
                            M[j][i] = border;
                        }
                        else
                        {
                            border--;///2
                            M[i][j] = border;
                            M[j][i] = border;
                        }
                    }
                }
                start++;
                end--;
                n -= 2;///2
                counter = 0;
            }
        }

        ///Print
        //printf("Op done\n");
        for (i = 0; i < pr_lim; i++)
        {
            for (j = 0; j < pr_lim; j++)
            {
                if (j == pr_lim - 1)
                    printf("%3d", M[i][j]);
                else
                    printf("%3d ", M[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
