#include <stdio.h>

int main(void)
{
    int i, n = 100;
    float a[n];

    ///Scan data
    for (i = 0; i < n; i++)
        scanf("%f", &a[i]);

    ///Look for value <= 10
    for (i = 0; i < n; i++)
    {
        if (a[i] <= 10)
            printf("A[%d] = %.1f\n", i, a[i]);
    }

    return 0;
}
