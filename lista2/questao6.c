#include <stdio.h>
#include <stdlib.h>

int main(){
    float paulo=0, renata=0, branco=0, nulo=0, total=0;
    int voto;
    puts("---VOTE PARA O PRESIDENTE---\n");
    puts("Vote 5 para Paulo");
    puts("Vote 7 para Renata");
    puts("Voto 0= voto em branco");
    puts("Digite un número negativo para encerrar a votação e ver o resultado.");

    while (1){
        scanf("%d", &voto);
        total++;
        if (voto < 0){
            break;
        }
        switch (voto){
            case 5:
                paulo++;
                break;
            case 7:
                renata++;
                break;
            case 0:
                branco++;
                break;
            default:
                nulo++;
        }
    }
    paulo = (paulo/total)*100;
    renata = (renata/total)*100;
    branco = (branco/total)*100;
    nulo = (nulo/total)*100;

    puts("---RESULTADO---");
    printf("Paulo: %0.2f %%\n", paulo);
    printf("Renata: %0.2f %%\n", renata);
    printf("Branco: %0.2f %%\n", branco);
    printf("Nulo: %0.2f %%\n", nulo);

    return 0;
}