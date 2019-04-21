#include <stdio.h>

int main(void)
{
    long long a;
    int counter = 0;
    char str[20];

    scanf("%lld", &a);
    while(a > 0)
    {
        long rem = a % 16;
        if (rem < 10)
            str[counter++] = 48 + rem;
        else
            str[counter++] = 55 + rem;

        a /= 16;
    }

    //printf("%d\n", counter);

    for (int i = counter - 1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");

    return 0;
}
