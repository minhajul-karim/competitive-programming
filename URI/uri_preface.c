#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int find_q(int x, int y, int rem);

void pr(int q, int r);

int main(void)
{
    int a, b, i, remainder, quotient, num;
    scanf("%d %d", &a, &b);
    int abs_a = abs(a);
    int abs_b = abs(b);

    ///if a is positive
    if (a >= 0)
    {
        remainder = a % abs_b;
        quotient = find_q(a, b, remainder);
        pr(quotient, remainder);
    }

    ///else if a is neg
    ///Anti-clockwise
    else
    {
        ///(-9, -3)
        if (abs_a > abs_b)
        {
            num = ((abs_a / abs_b) * abs_b);///
            //printf("abs_a = %d, num = %d\n", abs_a, num);
            if (num == abs_a)
            {
                remainder = 0;
            }

            else
            {
                for (i = abs_b; i >= 0; i--)
                {
                    if (num == abs_a)
                    {
                        remainder = i;
                        break;
                    }
                    num++;
                }
            }
            //printf("i = %d\n", i);
            quotient = find_q(a, b, remainder);
            pr(quotient, remainder);
            //printf("num = %d\n", num);
        }

        ///(-2, 4)
        else if (abs_a <= abs_b)
        {
            //remainder = abs_b - abs_a;
            num = abs_b;
            for (i = 1; i <= abs_a; i++)
            {
                num--;
            }
            remainder = num;
            quotient = find_q(a, b, remainder);
            pr(quotient, remainder);
        }
    }

    return 0;
}


int find_q(int x, int y, int rem)
{
    int quo = (x - rem) / y;
    return quo;
}

void pr(int q, int r)
{
    printf("%d %d\n", q, r);
}
