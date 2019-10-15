#include <stdio.h>

int main(void)
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int smallest_index, smallest = arr[0];

    for (i = 0; i < n; i++)
    {
        if (arr[i] <= smallest)
        {
            smallest = arr[i];
            smallest_index = i;
        }
    }

    printf("Menor valor: %d\n", smallest);
    printf("Posicao: %d\n", smallest_index);

    return 0;
}
