#include <stdio.h>

int maxi(int p, int q);

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == b)
        printf("%d\n", a);
    else
        printf("%d\n", maxi(a, b));

    return 0;
}

int maxi(int p, int q)
{
    if (p >= q)
        return p;
    else
        return q;
}
