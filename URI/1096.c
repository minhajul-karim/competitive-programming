#include <stdio.h>

int main() {
    int i,j, x = 7, count = 0;

    for(i = 1; i <= 9; i+=2) {
        for(j = x; ; j--) {
            count++;
            if(count > 3) break;
            printf("I=%d J=%d\n", i, j);
        }
        x = j + 5;
        count = 0;
    }

    return 0;
}
