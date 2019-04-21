#include <stdio.h>

int main(void)
{
    int arr[1000], i, j, T, counter = 0;
    scanf("%d", &T);
    for (i = 0; counter < 1000; i++)
    {
        for (j = 0; j < T && counter < 1000; j++)
        {
            printf("N[%d] = %d\n", counter, j);
            counter++;
        }
    }

    return 0;
}
