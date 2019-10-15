#include <stdio.h>

int main(void)
{
    int i, j, T, x;
    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        scanf("%d", &x);
        int res = 0;
        for (j = 1; j < x; j++)
        {
            if (x % j == 0)
                res += j;
        }
//        printf("res = %d\n", res);
        if (res == x)
            printf("%d eh perfeito\n", x);
        else
            printf("%d nao eh perfeito\n", x);
    }
    return 0;
}
