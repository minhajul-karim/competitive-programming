#include <stdio.h>

int main(void)
{
    int x, z, i, count = 1, res;
    scanf("%d", &x);
    res = x;
    do
    {
        scanf("%d", &z);
    }
    while(z <= x);

//    printf("a = %d, n = %d\n", x, z);

    for (i = x; ; i++)
    {
        res += i;
        if (i == 0)
            continue;
        count++;
        if (res > z) break;
    }

    printf("%d\n", count);



    return 0;
}
