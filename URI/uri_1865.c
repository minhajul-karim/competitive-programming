//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void)
//{
//
//    int t, force;
//    char name[20];
//    scanf("%d", &t);
//    for (int i = 1; i <= t; i++)
//    {
//        scanf("%s %d", name, &force);
//        if (strcmp(name, "Thor") == 0)
//        {
//            printf("Y\n");
//        }
//        else
//        {
//            printf("N\n");
//        }
//
//    }
//
//    return 0;
//}

#include <stdio.h>

int main() {

    int t, n, i;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
            printf("0\n");
        else
            printf("1\n");
    }

    return 0;
}
