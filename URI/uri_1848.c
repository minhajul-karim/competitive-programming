#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char str[10];
    char str2[10] = "caw caw\n";
    int arr[3], res[3], counter = 0, caw_counter = 1, i, decimal = 0;

    while(caw_counter <= 3)
    {
        ///Scan the string
        fgets(str, 10, stdin);

        ///Check if the string is 'caw caw' or blink
        if (strcmp(str, str2) == 0)
        {
            caw_counter++;
            res[counter] = decimal;
            counter++;
            decimal = 0;
        }
        else
        {
            ///string to int array
            for (i = 0; i < 3; i++)
            {
                if (str[i] == '*')
                    arr[i] = 1;
                else if (str[i] == '_' || str[i] == '-')
                    arr[i] = 0;
            }

            ///Convert int array to decimal
            int position = 0;
            for (i = 2; i >= 0; i--)
            {
                decimal += (pow(2, position) * arr[i]);
                position++;
            }
        }
    }

    ///Print result
    for (i = 0; i < 3; i++)
        printf("%d\n", res[i]);

    return 0;
}
