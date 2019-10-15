#include <stdio.h>

int main(void)
{
    int i, j, n = 20, count = 0;
    int a[n], b[n];

    ///Read the array
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    ///Reverse the arrray
    for (j = n - 1; j >= 0; j--)
    {
        b[count] = a[j];
        count++;
    }

    ///Print
    for (i = 0; i < n; i++)
        printf("N[%d] = %d\n", i, b[i]);

    return 0;
}
