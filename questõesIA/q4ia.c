#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;

    // Lemos o primeiro numero antes do laço
    scanf("%d", &numero);

    // O laço continua enquanto o numero for diferente de -1 (substitui o break)
    while (numero != -1) {
        // Processa o numero apenas se estiver no intervalo valido [0, 255]
        // (substitui as checagens com continue)
        if (numero >= 0 && numero <= 255) {
            soma += numero;
            contador++;
        }

        // Le o proximo numero para a seguinte iteracao do laço
        scanf("%d", &numero);
    }

    printf("Soma = %d\n", soma);
    printf("Quantidade = %d\n", contador);

    return 0;
}