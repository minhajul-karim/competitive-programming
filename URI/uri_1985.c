#include <stdio.h>

int main(void)
{
    int id, i, n;
    float quantity, price, total = 0.0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d %f", &id, &quantity);
        /// Find the price
        switch(id)
        {
            case 1001:
                price = 1.50;
                break;
            case 1002:
                price = 2.50;
                break;
            case 1003:
                price = 3.50;
                break;
            case 1004:
                price = 4.50;
                break;
            case 1005:
                price = 5.50;
                break;
        }
        total += (price * quantity);

    }
    printf("%.2f\n", total);

    return 0;
}
