
#include <stdio.h>

int main(void)
{
    float M[12][12];
    int row, col;
    char o;

    ///Take input for line
    scanf("%c", &o);

    ///Fill up the 2D array;
    for (row = 0; row < 12; row++)
    {
        for (col = 0; col < 12; col++)
        {
            scanf("%f", &M[row][col]);
        }
    }

    ///Calculation in line
    float sum = 0;
    int start = 5, end = 6, counter = 0;
    for (col = 4; col >= 0; col--)
    {
        for (row = start; row <= end; row++)
        {
            sum += M[row][col];
            counter++;
        }
        start--;
        end++;
    }

    ///Check if op is sum or avg
    if (o == 'S')
        printf("%.1lf\n", sum);
    else if (o == 'M')
        printf("%.1lf\n", sum / counter);

    //printf("sum = %f, elements = %d\n", sum, counter);

    return 0;
}




