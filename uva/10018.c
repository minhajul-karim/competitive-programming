#include <math.h>
#include <stdio.h>
#include <string.h>

int strtoint(char str[]);

void rev(char string[]);

int main(void)
{
    int t;
    char str[100], res_str[100];

    /* Scan for test case*/
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%s", str);
        int counter = 0;

        while(1)
        {
            /* increment the counter*/
            counter++;

            /* convert input string to int*/
            //unsigned int num1 = strtoint(str);
            unsigned int num1 = strtoint(str);

            /* reverse the input string*/
            rev(str);

            /* convert reversed string to int*/
            unsigned int num2 = strtoint(str);
            unsigned int result = num1 + num2;

            /* convert result(int) into string*/
            sprintf(res_str, "%u", result);

            /* copy the result string into the input string*/
            strcpy(str, res_str);

            /* reverse the result string*/
            rev(res_str);

            /* compare if they are alike or not*/
            if (strcmp(str, res_str) == 0)
            {
                printf("%d %s\n", counter, str);
                break;
            }
//            printf("%s\n", str);
//            break;
        }
    }

    return 0;
}

int strtoint(char str[])
{
    int len = strlen(str);
    int num = 0, pos = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        num += (str[i] - 48) * pow(10, pos++);
    }
    return num;
}

void rev(char string[])
{
    int len = strlen(string);
    int st = 0, end = len - 1;
    while(st <= end)
    {
        char temp1 = string[st];
        char temp2 = string[end];
        string[st] = temp2;
        string[end] = temp1;
        st++;
        end--;
    }
    string[len] = '\0';
}

