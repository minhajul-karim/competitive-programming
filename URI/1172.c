#include <stdio.h>

int main(void)
{
//    int arr[10] = {-1,-45234,-22,-120,0,2,-200,1,9,22}, i;
    int arr[10], i;

    ///Scan the values to the array
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < 10; i++)
    {
        if (arr[i] <= 0)
            arr[i] = 1;
    }

    ///Print
    for (i = 0; i < 10; i++)
        printf("X[%d] = %d\n", i, arr[i]);

    return 0;
}
