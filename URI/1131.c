#include <stdio.h>

int main() {

    int x, inter, gremio, inter_won = 0, gremio_won = 0, drawn = 0, count = 0;

    while(1) {

        scanf("%d %d", &inter, &gremio);
        ++count;
        if(inter > gremio) ++inter_won;
        else if(inter < gremio) ++gremio_won;
        else ++drawn;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &x);
        if(x == 2) break;
        else if( x > 1 || x < 1) break;
    }

    printf("%d grenais\n", count);
    printf("Inter:%d\n", inter_won);
    printf("Gremio:%d\n", gremio_won);
    printf("Empates:%d\n", drawn);

    if(inter_won > gremio_won) printf("Inter venceu mais\n");
    else if(inter_won < gremio_won) printf("Gremio venceu mais\n");
    else printf("Não houve vencedor\n");

    return 0;
}
