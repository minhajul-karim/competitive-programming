#include <stdio.h>

int main(void)
{
    double M[12][12];
    int i, j, counter = 0;
    char o;

    ///Take input for line
    scanf("%c", &o);

    ///Fill up the 2D array;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }

    ///Calculation in line
    double sum = 0;
    int end = 10;
    for (i = 0; i <= 4; i++)
    {
        for (j = i + 1; j <= end; j++)
        {
            sum += M[i][j];
            counter++;
        }
        end--;
    }

    ///Check if op is sum or avg
    if (o == 'S')
        printf("%.1lf\n", sum);
    else if (o == 'M')
        printf("%.1lf\n", sum / counter);

    //printf("sum = %f, elements = %d\n", sum, counter);

    return 0;
}



