#include <stdio.h>

int main() {
    int n, i, count = 0;
    int arr[10000];
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

//    Travarese through the array to see if they are in between [10,20]

    for(i = 0; i < n; i++) {
        if(arr[i] >= 10 && arr[i] <= 20) count++;
    }

    printf("%d in\n", count);
    printf("%d out\n", n-count);

    return 0;
}
