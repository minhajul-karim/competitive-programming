#include <stdio.h>

int main()
{
    double old_price, new_price, res;
    char percentage = '%';
    scanf("%lf %lf", &old_price, &new_price);
    res = new_price - old_price;
    printf("%.2lf%c\n", (res / old_price) * 100.00, percentage);
    return 0;
}
