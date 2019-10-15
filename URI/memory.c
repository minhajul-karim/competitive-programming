#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, sum;
    int *ptr = malloc(5 * sizeof(int));

    for (i=0; i<5; i++)
        *(ptr + i) = i;

    sum = *ptr++;//0
    printf("Sum = %d\n", sum);
    sum += (*ptr)++;//1
    printf("Sum = %d\n", sum);
    sum += *ptr;//2
    printf("Sum = %d\n", sum);
    sum += *++ptr;
    printf("Sum = %d\n", sum);
    sum += ++*ptr;
    printf("Sum = %d\n", sum);
}
