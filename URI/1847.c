#include <stdio.h>

int main(void)
{
    int first, second, third;
    scanf("%d %d %d", &first, &second, &third);

    ///Calculation
    if (first > second && (second < third || second == third))
        printf(":)\n");
    else if (first < second && (second > third || second == third))
        printf(":(\n");
    else if (first < second && second < third && (third - second) < (second - first))
        printf(":(\n");
    else if (first < second && second < third && (third - second) >= (second - first))
        printf(":)\n");
    else if (first > second && second > third && (second - third) < (first - second))
        printf(":)\n");
    else if (first > second && second > third && (second - third) >= (first - second))
        printf(":(\n");
    else if (first == second && second < third)
        printf(":)\n");
    else if (first == second && second >= third)
        printf(":(\n");
    return 0;
}
