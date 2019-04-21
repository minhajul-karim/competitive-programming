#include <stdio.h>

int main(void)
{
    int arr[10], i, x;
    scanf("%d", &x);
    arr[0] = x;
    for (i = 1; i < 10; i++)
    {
        arr[i] = arr[i - 1] * 2;
    }

    ///print
    for (i = 0; i < 10; i++)
        printf("N[%d] = %d\n", i, arr[i]);
    return 0;
}
