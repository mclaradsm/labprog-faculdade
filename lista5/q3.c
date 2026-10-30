#include <stdio.h>

int main(){
    int menor, numero;
    int *pmenor;

    puts("Digite os números de sua escolha: \n");
    puts("Para encerrar digite 0.\n");
    scanf("%d", &numero);

    pmenor = &menor;
    *pmenor = numero;

    while(numero){
        scanf("%d", &numero);
        
        if (numero ==0) break;

        if (numero < *pmenor) *pmenor=numero;
    }

    printf("Menor valor: %d\n", *pmenor);

    return 0;
}