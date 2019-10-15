#include <stdio.h>
#include <string.h>

int main(void)
{
    char sheldon[10], raj[10];
    int T, i;
    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        scanf("%s %s", sheldon, raj);
        //printf("%s - %s\n", sheldon, raj);

        if (strcmp(sheldon, raj) == 0)
            printf("Caso #%d: De novo!\n", i);
        ///1
        else if ((strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "papel") == 0)
        || (strcmp(raj, "tesoura") == 0 && strcmp(sheldon, "papel") == 0))
        {
            if (strcmp(sheldon, "tesoura") == 0)
                printf("Caso #%d: Bazinga!\n", i);
            else
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
        ///2
        else if ((strcmp(sheldon, "papel") == 0 && strcmp(raj, "pedra") == 0)
        || (strcmp(raj, "papel") == 0 && strcmp(sheldon, "pedra") == 0))
        {
            if (strcmp(sheldon, "papel") == 0)
                printf("Caso #%d: Bazinga!\n", i);
            else
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
        ///3
        else if ((strcmp(sheldon, "pedra") == 0 && strcmp(raj, "lagarto") == 0)
        || (strcmp(raj, "pedra") == 0 && strcmp(sheldon, "lagarto") == 0))
        {
            if (strcmp(sheldon, "pedra") == 0)
                printf("Caso #%d: Bazinga!\n", i);
            else
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
        ///4
        else if ((strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "Spock") == 0)
        || (strcmp(raj, "lagarto") == 0 && strcmp(sheldon, "Spock") == 0))
        {
            if (strcmp(sheldon, "lagarto") == 0)
                printf("Caso #%d: Bazinga!\n", i);
            else
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
        ///5
        else if ((strcmp(sheldon, "Spock") == 0 && strcmp(raj, "tesoura") == 0)
        || (strcmp(raj, "Spock") == 0 && strcmp(sheldon, "tesoura") == 0))
        {
            if (strcmp(sheldon, "Spock") == 0)
                printf("Caso #%d: Bazinga!\n", i);
            else
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
        ///6
        else if ((strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "lagarto") == 0)
        || (strcmp(raj, "tesoura") == 0 && strcmp(sheldon, "lagarto") == 0))
        {
            if (strcmp(sheldon, "tesoura") == 0)
                printf("Caso #%d: Bazinga!\n", i);
            else
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
        ///7
        else if ((strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "papel") == 0)
        || (strcmp(raj, "lagarto") == 0 && strcmp(sheldon, "papel") == 0))
        {
            if (strcmp(sheldon, "lagarto") == 0)
                printf("Caso #%d: Bazinga!\n", i);
            else
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
        ///8
        else if ((strcmp(sheldon, "papel") == 0 && strcmp(raj, "Spock") == 0)
        || (strcmp(raj, "papel") == 0 && strcmp(sheldon, "Spock") == 0))
        {
            if (strcmp(sheldon, "papel") == 0)
                printf("Caso #%d: Bazinga!\n", i);
            else
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
        ///9
        else if ((strcmp(sheldon, "Spock") == 0 && strcmp(raj, "pedra") == 0)
        || (strcmp(raj, "Spock") == 0 && strcmp(sheldon, "pedra") == 0))
        {
            if (strcmp(sheldon, "Spock") == 0)
                printf("Caso #%d: Bazinga!\n", i);
            else
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
        ///10
        else if ((strcmp(sheldon, "pedra") == 0 && strcmp(raj, "tesoura") == 0)
        || (strcmp(raj, "pedra") == 0 && strcmp(sheldon, "tesoura") == 0))
        {
            if (strcmp(sheldon, "pedra") == 0)
                printf("Caso #%d: Bazinga!\n", i);
            else
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }

    return 0;
}
