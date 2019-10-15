#include <stdio.h>

int main(void)
{
    unsigned int t, i, reg_num[100];
    float score[100];
    scanf("%u", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%u %f", &reg_num[i], &score[i]);
    }

    float max = score[0];
    int max_pos;
    for (i = 0; i < t; i++)
    {
        if (score[i] > max)
        {
            max = score[i];
            max_pos = i;
        }
    }

    if (max >= 8.0)
        printf("%u\n", reg_num[max_pos]);
    else
        printf("Minimum note not reached\n");

    return 0;
}
