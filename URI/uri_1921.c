#include <stdio.h>

int main(void)
{
    long long n;
    scanf("%lld", &n);
    long long res = (n * (n - 3)) / 2;
    printf("%lld\n", res);
    //printf("size of long long = %lu\n", sizeof(long long));
    return 0;
}

//int main(void)
//{
//    int i, j, n = 100000, counter = 0;
//    //scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        if ((i + 2) <= n)
//        {
//            if (i == 1)
//            {
//                for (j = i + 2; j < n; j++)
//                {
//                    printf("(%d %d), ", i, j);
//                    counter++;
//                }
//            }
//            else
//            {
//                for (j = i + 2; j <= n; j++)
//                {
//                    printf("(%d %d), ", i, j);
//                    counter++;
//                }
//            }
//            printf("\n");
//        }
//    }
//
//    printf("res = %d\n", counter);
//
//    return 0;
//}
