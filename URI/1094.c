#include <stdio.h>

int main() {
    int total, coelho = 0, rato = 0, sapo = 0, num, i, n;
    char ch;

    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        scanf("%d %c", &num, &ch);
        if(ch == 'C') coelho += num;
        else if(ch == 'R') rato += num;
        else if(ch == 'S') sapo += num;
    }

    total = coelho+rato+sapo;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);

    printf("Percentual de coelhos: %.2lf %\n", (100.00*coelho)/total);
    printf("Percentual de ratos: %.2lf %\n", (100.00*rato)/total);
    printf("Percentual de sapos: %.2lf %\n", (100.00*sapo)/total);

    return 0;
}
