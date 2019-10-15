#include <stdio.h>
#include <string.h>

#define MAX_STRING_SIZE 1001
#define MAX_TEST_CASE 10000

void reverse(char s[]);
void remove_new_line(char s[], int length);

int main(void)
{
    int i, j, k, T;
    char str[MAX_STRING_SIZE];

    // Scan the number of test cases
    char number_of_test_cases[MAX_TEST_CASE];
    fgets(number_of_test_cases, MAX_TEST_CASE, stdin);
    sscanf(number_of_test_cases, "%d", &T);

    for (i = 1; i <= T; i++)
    {
        // Input string into str
        fgets(str, MAX_STRING_SIZE, stdin);

        // Length of str
        int len = (int)strlen(str);

        // Remove trailing newline of fgets()
        remove_new_line(str, len);

        // Shift letters
        for (j = 0; j < len; j++)
        {
            // If j'th char is an alplhabet
            if ((str[j] >= 65 && str[j] <= 90) || (str[j] >= 97 && str[j] <= 122))
                str[j] = str[j] + 3;
        }

        // Reverse str
        reverse(str);

        // Shift from the middle
        for (k = (len-1)/2; k < len - 1; k++)
            str[k] = str[k] - 1;

        printf("%s\n", str);

    }

    return 0;
}

void reverse(char s[])
{
    int length = strlen(s) ;
    int c, i, j;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}


void remove_new_line(char s[], int length)
{
    for(int x = 0; x <= length; x++)
    {
        if (s[x] == '\n')
        {
            s[x] = '\0';
            break;
        }
    }
}
