#include <stdio.h>
#include <string.h>

int main(void)
{
    float M[12][12];
    int i, j, counter = 0;
    char op[2];

    ///Take input for line
    scanf("%s", op);

    ///Fill up the 2D array;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%f", &M[i][j]);
        }
    }

    ///Calculation in line
    float sum = 0;
    int last = 11;
    for (i = 1; i < 12; i++)
    {
        for (j = last; j <= 11; j++)
        {
            sum += M[i][j];
            counter++;
        }
        last--;
    }

    ///Check if op is sum or avg
    if (strcmp(op, "S") == 0)
        printf("%.1f\n", sum);
    else if (strcmp(op, "M") == 0)
        printf("%.1f\n", sum / counter);

    //printf("sum = %f, elements = %d\n", sum, counter);

    return 0;
}



