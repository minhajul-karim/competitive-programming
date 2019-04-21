#include <stdio.h>

int main(void)
{
    int T, x, y, i, j;
    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        scanf("%d %d", &x, &y);
        int count = 1, res = 0;
        if (x % 2 == 0)
            x++;//x = 5
        for (j = x; count <= y; count++, j += 2)
        {
            res += j;
        }

        printf("%d\n", res);

    }
    return 0;
}



