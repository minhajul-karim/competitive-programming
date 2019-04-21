#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, t;
    long long n, res;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%lld", &n);
        res = n - 2015;
        if ( res >= 0)
            printf("%lld A.C.\n", res + 1);
        else
            printf("%lld D.C.\n", llabs(res));

    }

    return 0;
}
