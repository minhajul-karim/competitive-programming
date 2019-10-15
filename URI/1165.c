#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, j, T, x, sq;
    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        scanf("%d", &x);
        sq = sqrt(x);
        if(x == 1)
            printf("%d nao eh primo\n", x);
        else if (x == 2)
            printf("%d eh primo\n", x);
        else if (x % 2 == 0)
            printf("%d nao eh primo\n", x);
        else
        {
            int count = 0;
            for (j = 3; j <= sq; j += 2)
            {
                if (x % j == 0)
                    count++;
            }
            if (count == 0)
                printf("%d eh primo\n", x);
            else
                printf("%d nao eh primo\n", x);

        }
    }
    return 0;
}
