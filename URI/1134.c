#include <stdio.h>

int main(void)
{
    int n, alc = 0, gas = 0, dsl = 0;
    while(1)
    {
        scanf("%d", &n);
        if (n == 1)
            alc++;
        else if (n == 2)
            gas++;
        else if (n == 3)
            dsl++;
        else if (n == 4)
            break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alc);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", dsl);
    return 0;
}
