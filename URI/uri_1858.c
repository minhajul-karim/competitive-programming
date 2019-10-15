#include <stdio.h>

int main(void)
{
    int n, i, arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], min_pos = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_pos = i;
        }
    }

    printf("%d\n", min_pos + 1);
    return 0;
}
