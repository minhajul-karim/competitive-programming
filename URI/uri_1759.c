#include <stdio.h>

int main(void)
{
    char str[2] = "Ho";
    //int n;
    long n;
    scanf("%ld", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
            printf("%s", str);
        else
            printf("%s ", str);
    }
    printf("!\n");

    return 0;
}
