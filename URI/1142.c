#include <stdio.h>

int main(void)
{
    int n, i, j = 1, count;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        count = 1;
        for (j; count <= 3; count++, j++)
        {
            printf("%d ", j);
        }
        printf("PUM\n");
        j++;
    }
    return 0;
}
