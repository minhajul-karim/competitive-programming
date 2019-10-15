#include <stdio.h>
#include <string.h>
#include <crypt.h>

int main() {

    char bar[52];
    int i;
    for (i = 0; i < 26; i++)
    {
        bar[i] = (i + 65);
    }
    for (i = 26; i < 52; i++)
    {
        bar[i] = (i + 71);
    }

    printf("Printing...\n");
    for (i = 0; i < 52; i++)
        printf("%c ", bar[i]);
    printf("\n");

    //

    char str[10];
    char sec_hashed_key[20];
    char salt[10] = "50";
    char key[] = "50pe4e2XTIS/g";
    for (i = 0; i < 52; i++)
    {
        str[0] = bar[i];
        str[1] = '\0';
        strcpy(sec_hashed_key, crypt(str, salt));
        //printf("sec hashed key = %s\n", sec_hashed_key);
        if (strcmp(key, sec_hashed_key) == 0)
        {
            printf("Matched! %s\n", str);
            return 0;
        }

    }
    printf("did not match\n");

    return 0;
}
