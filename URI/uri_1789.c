#include <stdio.h>

int main(void)
{
    int i, n, max_val, arr[500];
    while(scanf("%d", &n) != EOF)
    {
        ///insert into arr
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        ///Look for the max value
        max_val = arr[0];
        for (i = 0; i < n; i++)
        {
            if (arr[i] > max_val)
                max_val = arr[i];
        }

        //printf("max = %d\n", max_val);
        if (max_val < 10)
            printf("1\n");
        else if (max_val >= 10 && max_val < 20)
            printf("2\n");
        else if (max_val >= 20)
            printf("3\n");

    }

    return 0;
}
