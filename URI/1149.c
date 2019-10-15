#include <stdio.h>

int main(void)
{
    int a, n, i, count = 1, res = 0;
    scanf("%d", &a);
    do
    {
        scanf("%d", &n);
    }
    while(n == 0 || n < 0);

    //printf("a = %d, n = %d\n", a, n);

    for (i = a; count <= n; count++, i++)
    {
        res += i;
    }

    printf("%d\n", res);

    return 0;
}
