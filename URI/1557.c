#include <stdio.h>

int dig(int x);

int main(void)
{
    int M[20][20], n, i, j;

    while(1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;

        ///Setting the first row
        int val = 1;
        for (i = 0; i < n; i++)
        {
            M[0][i] = val;
            val *= 2;
        }
        val = 0;

        ///Increment values colwise
        for (i = 0; i < n; i++)
        {
            val = M[0][i];
            //printf("val = %d\n", val);
            for (j = 1; j < n; j++)
            {
                val *= 2;
                M[j][i] = val;
            }
        }


        int num_of_digits = dig(M[n - 1][n - 1]);

        ///Print
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j == n - 1)
                    printf("%*d", num_of_digits, M[i][j]);
                else
                    printf("%*d ", num_of_digits, M[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

int dig(int x)
{
    int len = 0;

    if (x == 0)
    {
        len++;
        return len;
    }
    else
    {
        while (x != 0)
        {
            len++;
            x /= 10;
        }
        return len;
    }
}
