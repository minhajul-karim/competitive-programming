#include <stdio.h>

int main ()
{
   char buffer[10];
   int hour, min, res;

   while(scanf("%s", buffer) != EOF)
   {
        sscanf(buffer,"%d%*1c%d", &hour, &min);
        min += 60;
        if (min >= 60)
        {
            hour++;
            min -= 60;
        }
        res = ((hour - 8) * 60) + min;
        if (res > 0)
            printf("Atraso maximo: %d\n", res);
        else
            printf("Atraso maximo: 0\n");
   }

   return 0;
}

