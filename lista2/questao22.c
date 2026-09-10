#include <stdio.h>

int main() {
    int numero, count = 0;
    puts("Digite um número inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero % 10 == 7) {
            count++;
        }
        numero /= 10; // Remove o último dígito
    }

    printf("O número de dígitos '7' no inteiro é: %d\n", count);
    return 0;
}