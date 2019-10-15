#include <stdio.h>


double calculate(double a[]) {
    printf("media = %.2lf\n", (a[0] + a[1])/2);
}


int main() {

    double a,b, arr[2];
    int count = 0, x;

    while(1) {
        /// test for main input
//        printf("enter val for calculation\n");
        scanf("%lf", &a);
        if(a >= 0 && a <= 10) {
            arr[count] = a;
            count++;
                if(count == 2) {
                count = 0;
                calculate(arr);
                ///test for x

                while(1) {
//                    printf("enter x\n");
                    scanf("%d", &x);
                    printf("novo calculo (1-sim 2-nao)\n");
                    if( x == 1) break;
                    if( x == 2) return 0;
                }

            }
        }
        else printf("nota invalida\n");
    }
    return 0;
}

