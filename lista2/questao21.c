#include <stdio.h>

int main(){
    int numero, d1, d2, d3, d4, d5;
    puts("Digite um número de cinco dígitos: ");
    scanf("%d", &numero);
    d1 = numero / 10000;
    d2 = (numero / 1000) % 10;
    d3 = (numero / 100) % 10;
    d4 = (numero / 10) % 10;
    d5 = numero % 10;

    if (d1 == d5 && d2 == d4) {
        puts("O número é um palíndromo.");
    } else {
        puts("O número não é um palíndromo.");
    }

    return 0;
}