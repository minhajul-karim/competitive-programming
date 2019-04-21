#include <stdio.h>

int main(void)
{
    int a[50], n, i, count = 2;
    a[0] = 0, a[1] = 1;
    scanf("%d", &n);
    if (n == 1)
        printf("%d\n", a[0]);
    else if (n == 2)
        printf("%d %d\n", a[0], a[1]);
    else if (n > 2)
    {
        printf("%d %d ", a[0], a[1]);
        for (i = 2; count < n; count++, i++)
        {
            a[i] = a[i - 1] + a[i - 2];
            if (count == n - 1)
                printf("%d\n", a[i]);
            else
                printf("%d ", a[i]);
        }
    }
    return 0;
}
