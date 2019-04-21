#include <stdio.h>

int main(void)
{
    float divident, divisor = 1, division, res = 1;
    for (divident = 3; divident <= 39; divident += 2)
    {
        division = divident / (divisor *= 2);
        res += division;
    }
    printf("%.2f\n", res);
    return 0;
}
