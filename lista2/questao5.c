#include <stdio.h>

int main(){
    int numero, maior;
    puts("Digite números para saber qual é o maior? Digite 0 para encerrar o programa.");
    scanf("%d", &numero);

    maior = numero;
    while (numero != 0){
        scanf("%d", &numero);
        if (numero > maior){
            maior = numero;
        }
        printf("O maior número digitado é: %d\n", maior);
    }

    return 0;
}