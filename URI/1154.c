#include <stdio.h>

int main(void)
{
    float age, total = 0;
    int person = 0;
    do
    {
        scanf("%f", &age);
        if (age > 0)
            total += age;
            person++;
    }
    while(age > 0);

    printf("%.2f\n", total/(person - 1));

    return 0;
}
