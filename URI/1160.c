#include <stdio.h>

int main(void)
{
    int i, T, pa, pb;
    float ga, gb;
    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        scanf("%d %d %f %f", &pa, &pb, &ga, &gb);
        int year = 0;
        while(1)
        {
            pa += ((pa * ga) / 100);
            pb += ((pb * gb) / 100);
            year++;
            if (year > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
            else if (pa > pb)
            {
                printf("%d anos.\n", year);
                break;
            }
        }
    }
    return 0;
}
