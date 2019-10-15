#include <stdio.h>

int main(void)
{
    int i, j, n, case_no = 0;

    // Take input until EOF
    while(scanf("%d", &n) != EOF)
    {
        // Increment the case number right after taking input
        case_no++;
        int counter = 0;

        // Count the number of total digits
        for (i = 0; i <= n; i++)
        {
            if (i == 0)
                counter++;
            else
                counter += i;
        }

        // Differentiate between singular & plural case numbers
        if (counter == 1)
            printf("Caso %d: %d numero\n", case_no, counter);
        else
            printf("Caso %d: %d numeros\n", case_no, counter);


        // Print the seqeunce
        for (i = 0; i <= n; i++)
        {
            // For n == 0
            if (i == 0 && i == n)
                printf("%d\n", i);

            // The first element of a sequence
            else if (i == 0)
                printf("%d ", i);

            else
            {
                // Repeat the i'th digit e.g., 2 will be repeated twice, 3 thrice
                for (j = 1; j <= i; j++)
                {
                    // Print the last element w/o a space following it
                    if (i == n && j == i)
                        printf("%d\n", i);
                    else
                        printf("%d ", i);
                }

            }

        }
        // Black space after each case
        printf("\n");
    }

    return 0;
}
