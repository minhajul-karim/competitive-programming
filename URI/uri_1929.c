#include <stdio.h>
#include <stdlib.h>

int isTriangle(int a, int b, int c);

int potentialTriangle(int a, int b, int c);

void isValid(int n);

int main(void)
{
    int p, q, r, a, b, c, d, validity;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    ///1st
    p = a, q = b, r = c;

    ///potential triangle
    validity = potentialTriangle(p, q, r);

    ///check validity
    isValid(validity);

    ///2nd
    p = a, q = b, r = d;

    ///potential triangle
    validity = potentialTriangle(p, q, r);

    ///check validity
    isValid(validity);

    ///3rd
    p = a, q = c, r = d;

    ///potential triangle
    validity = potentialTriangle(p, q, r);

    ///check validity
    isValid(validity);

    ///4th
    p = b, q = c, r = d;

    ///potential triangle
    validity = potentialTriangle(p, q, r);

    ///check validity
    isValid(validity);

    printf("N\n");

    return 0;
}

int isTriangle(int a, int b, int c)
{
    if ((a + b) > c && (a + c) > b && (b + c) > a)
        return 0;
    else
        return 1;
}

int potentialTriangle(int a, int b, int c)
{
    if (isTriangle(a, b, c) == 0)
        return 0;
    else
        return 1;
}

void isValid(int n)
{
    if (n == 0)
    {
        printf("S\n");
        exit(0);
    }
}
