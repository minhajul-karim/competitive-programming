#include <stdio.h>


double calculate(double a[]) {
    printf("media = %.2lf\n", (a[0] + a[1])/2);
}


int main() {

    double a,b, arr[2];
    int count = 0;

    while(1) {
        scanf("%lf", &a);
        if(a >= 0 && a <= 10) {
            arr[count] = a;
            count++;
                if(count == 2) {
                calculate(arr);
                break;
            }
        }
        else printf("nota invalida\n");

        scanf("%lf", &b);
        if(b >= 0 && b <= 10) {
            arr[count] = b;
            count++;
                if(count == 2) {
                calculate(arr);
                break;
            }
        }
        else printf("nota invalida\n");

    }
    return 0;
}
