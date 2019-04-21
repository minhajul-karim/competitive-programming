#include <stdio.h>

int main(void)
{
    long long n, i, attacked = 1;
    scanf("%lld", &n);

    long long arr[n];
    long long total = 0, stolen = 0;

    /// Scanning the array & adding it's values
    for (i = 0; i < n; i++)
    {
        //scanf("%u", &arr[i]);
        scanf("%lld", &arr[i]);
        total += arr[i];
    }

    //unsigned int index = 0;
    long long index = 0;
    while(1)
    {
        /// Check if we have arrived out of the array
        //if (index == 3) break;
        if (index < 0 || index == n) break;

        /// Check if arr[index] is even or odd
        int odd = 0, even = 0;
        if (arr[index] % 2 == 0)
            even++;
        else
            odd++;

        /// Check if there is any sheep to steal from arr[index]
        if (arr[index] > 0)
        {
            stolen++;
            arr[index]--;
        }

        /// Set the next index position based on even or odd
        if (odd == 1)
        {
            if (index == attacked)
                attacked++;

            index++;
        }
        else if (even == 1)
        {
            if (index == attacked)
                attacked++;

            index--;
        }
    }

    printf("%lld %lld\n", attacked, total - stolen);

    return 0;
}
