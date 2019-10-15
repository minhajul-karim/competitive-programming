#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20];
    scanf("%s", str);
    int len = strlen(str);

    for (int i = len - 1; i >= 0; i--)
    {
        if (i == 0)
            printf("%c\n", str[i]);
        else
            printf("%c", str[i]);
    }

    return 0;
}
