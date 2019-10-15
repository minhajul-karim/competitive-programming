#include <stdio.h>

int main(void)
{
    int n, count, i, res;
    while(1)
    {
        scanf("%d", &n);
        count = 0;
        res = 0;
        if (n == 0)
            break;
        if (n % 2 != 0)
            n++;
        //printf("%d\n", n);
        for (i = n; count < 5; i += 2)
        {
            res += i;
            count++;
        }
        printf("%d\n", res);
    }
    return 0;
}
