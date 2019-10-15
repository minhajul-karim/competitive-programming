#include <stdio.h>

int main(void)
{
    int M[110][110];
    int n, i, j, k, dif, border, counter;

    while(scanf("%d", &n) != EOF)///n = 4
    {
        ///Declaration of vars
        int start = 0, end = n - 1;///3
        ///st = 1, end = 2
        while (start <= end)///y
        {
            if (start == end)
            {
                M[start][end] = 2;
                break;
            }
            else
            {
                dif = end - start;///3,1
                counter = 0;
                for (i = start; ; i += dif)///0,3/ 1,2
                {
                    counter++;///1,2
                    if (counter > 2)
                        break;

                    for (j = start; j <= end; j++)///1-2
                    {
                        if (i == start)
                        {
                            if (j == start)
                            {
                                M[i][j] = 1;
                                M[j][i] = 1;
                            }
                            else if (j == end)
                            {
                                M[i][j] = 2;
                                M[j][i] = 2;
                            }
                            else
                            {
                                M[i][j] = 3;
                                M[j][i] = 3;
                            }
                        }

                        else if (i > start)
                        {
                            if (j == start)
                            {
                                M[i][j] = 2;
                                M[j][i] = 2;
                            }
                            else if (j == end)
                            {
                                M[i][j] = 1;
                                M[j][i] = 1;
                            }
                            else
                            {
                                M[i][j] = 3;
                                M[j][i] = 3;
                            }
                        }
                    }
                }
                start++;///1,2
                end--;///2,1
                counter = 0;
            }
        }

        ///Print
        //printf("Op done\n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d", M[i][j]);
            }
            printf("\n");
        }
        //printf("\n");
    }

    return 0;
}
