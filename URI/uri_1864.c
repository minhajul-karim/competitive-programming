#include <stdio.h>

int main(void)
{
    int n, i;
    char str[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    while(scanf("%d", &n) == 1)
    {
        for (i = 0; i < n; i++)
        {
            printf("%c", str[i]);
        }
        printf("\n");
    }

    return 0;
}
