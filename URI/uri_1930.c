#include <stdio.h>

int main(void)
{
    int t1, t2, t3, t4;
    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);
    int res = (t1 - 1) + (t2 - 1) + (t3 - 1) + t4;
    printf("%d\n", res);

    return 0;
}
