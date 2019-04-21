#include <stdio.h>
#include <string.h>

int main(void)
{
    char player_1[100], player_2[100], choice_of_pl_1[6], choice_of_pl_2[6];
    int t, i, n1, n2;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%s %s %s %s %d %d", player_1, choice_of_pl_1, player_2, choice_of_pl_2, &n1, &n2);
        ///if even
        if ((n1 + n2) % 2 == 0 )
        {
            if (strcmp(choice_of_pl_1, "PAR") == 0)
                printf("%s\n", player_1);
            else
                printf("%s\n", player_2);
        }
        ///if odd
        else
        {
            if (strcmp(choice_of_pl_1, "IMPAR") == 0)
                printf("%s\n", player_1);
            else
                printf("%s\n", player_2);
        }
    }

    return 0;
}
