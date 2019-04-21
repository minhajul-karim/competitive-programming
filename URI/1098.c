#include <stdio.h>
#include <math.h>

int main() {

    double i,j,p;
    int count = 0, num_of_print = 0;
    for(i = 0; i <= 2; i += 0.2) {
        for(j = 1; j <= 3; j++) {
            p = i+j;
            if(count == 0) printf("I=%.0lf J=%.0lf\n", i, p);
            else printf("I=%.1lf J=%.1lf\n", i, p);
            num_of_print++;
        }
        count++;
        if(num_of_print == 15){
            count = 0;
            num_of_print = 0;
        }
    }

    return 0;
}
