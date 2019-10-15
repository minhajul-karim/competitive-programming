#include <stdio.h>

int main(void)
{
    int a[15], even[5], odd[5], even_counter = 0, odd_counter = 0, global_counter = 0, i, j, k, n;

    ///Scan 15 values
    for (i = 0; i < 15; i++)
        scanf("%d", &a[i]);

    ///Check whether n is even or odd
    ///and add n to corresponding array
    for (i = 0; i < 15; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[even_counter] = a[i];
            even_counter++;
            global_counter++;
        }
        else
        {
            odd[odd_counter] = a[i];
            odd_counter++;
            global_counter++;
        }

        ///Check if any of the arrays are full
        if (even_counter == 5)
        {
            for (j = 0; j < 5; j++)
                printf("par[%d] = %d\n", j, even[j]);
            even_counter = 0;
        }

        else if (odd_counter == 5)
        {
            for (j = 0; j < 5; j++)
                printf("impar[%d] = %d\n", j, odd[j]);
            odd_counter = 0;
        }

    }
    //printf("Gl counter = %d\n", global_counter);
    //printf("even_counter = %d, odd_counter = %d\n", even_counter, odd_counter);
    if (odd_counter > 0)
    {
        for (i = 0; i < odd_counter; i++)
            printf("impar[%d] = %d\n", i, odd[i]);
    }

    if (even_counter > 0)
    {
        for (i = 0; i < even_counter; i++)
            printf("par[%d] = %d\n", i, even[i]);
    }

    return 0;
}
