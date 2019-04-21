#include <stdio.h>

int main(void)
{
    float res = 1;
    int i;
    for (i = 2; i <= 100; i++)
        res += (1.0/i);
    printf("%.2f\n", res);
    return 0;
}
