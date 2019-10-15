#include <stdio.h>

int maxi(int p, int q);

int mini(int p, int q);

int main(void)
{
    int t, i, line = 0;
    scanf("%d", &t);
    //printf("\n");
    for (i = 1; i <= t; i++)
    {
        //printf("\n");
        int ax, ay, bx, by, cx, cy, dx, dy, px, py, qx, qy;
        scanf("%d %d %d %d", &ax, &ay, &bx, &by);
        //printf("\n");
        scanf("%d %d %d %d", &cx, &cy, &dx, &dy);

        /// cordinates of the new rect
        px = maxi(ax, cx);
        py = maxi(ay, cy);
        qx = mini(bx, dx);
        qy = mini(by, dy);

        //printf("%d %d %d %d\n", px, py, qx, qy);

        if (line)
            printf("\n");
        line = 1;

        /// check for if the new rect is valid
        if (qx <= px || qy <= py)
            printf("No Overlap\n");
        else
            printf("%d %d %d %d\n", px, py, qx, qy);

        //printf("\n");
    }

    return 0;
}

int maxi(int p, int q)
{
    int maximum;
    if (p >= q)
        maximum = p;
    else
        maximum = q;
    return maximum;
}

int mini(int p, int q)
{
    int minimum;
    if (p <= q)
        minimum = p;
    else
        minimum = q;
    return minimum;
}
