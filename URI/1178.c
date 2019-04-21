#include <stdio.h>

int main(void)
{
    double num;
    int i, counter = 0;
    scanf("%lf", &num);
    printf("N[0] = %.4lf\n", num);
    for (i = 1; i < 100; i++)
    {
        num /= 2;
        printf("N[%d] = %.4lf\n", i, num);
    }

    return 0;
}
