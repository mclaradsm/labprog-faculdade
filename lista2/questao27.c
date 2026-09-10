#include <stdio.h>

int main() {

    int numero;
    int maior, menor;
    int primeiro = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (!(numero < 0 && numero % 2 == 0)) {

        if (primeiro == 1) {
            maior = numero;
            menor = numero;
            primeiro = 0;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }

        printf("Digite um numero: ");
        scanf("%d", &numero);
    }

    if (primeiro == 1) {
        printf("Nenhum numero valido foi digitado.\n");
    } else {
        printf("Maior numero: %d\n", maior);
        printf("Menor numero: %d\n", menor);
        printf("Produto do maior pelo menor: %d\n", maior * menor);
    }

    return 0;
}