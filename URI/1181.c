#include <stdio.h>
#include <string.h>

int main(void)
{
    float M[12][12];
    int i, j, line;
    char op[2];

    ///Take input for line
    scanf("%d %s", &line, op);

    ///Fill up the 2D array;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%f", &M[i][j]);
        }
    }

//    printf("Input finished\nPrinting the array\n");
//
//    for (i = 0; i < 12; i++)
//    {
//        for (j = 0; j < 12; j++)
//        {
//            printf("%f ", M[i][j]);
//        }
//        printf("\n");
//    }

    ///Calculation in line
    float sum = 0;
    for (i = line; i <= line; i++)
    {
        for (j = 0; j < 12; j++)
        {
            sum += M[i][j];
        }
    }

    ///Check if op is sum or avg
    if (strcmp(op, "S") == 0)
        printf("%.1f\n", sum);
    else if (strcmp(op, "M") == 0)
        printf("%.1f\n", sum / 12);

    //printf("sum = %d, elements = 3\n", sum);

    return 0;
}
