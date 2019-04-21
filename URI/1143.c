#include <stdio.h>

int main(void)
{
    int n, i, j, count;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        count = 1;
        for (j = i; count <= 3; count++, j*=i)
        {
            if (count == 3)
                printf("%d", j);
            else
                printf("%d ", j);
        }
        printf("\n");
        count = 1;
        for (j = i; count <= 3; count++, j*=i)
        {
            if (count == 1)
                printf("%d ", j);
            else if (count == 2)
                printf("%d ", j + 1);
            else
                printf("%d", j + 1);
        }
        printf("\n");
    }
    return 0;
}

