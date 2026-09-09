#include <stdio.h>
#include <stdlib.h>

int main(){
    int fibonacci, i;

    puts("Digite o número de termos da sequência de Fibonacci que deseja ver:");
    scanf("%d", &fibonacci);

    int fib[fibonacci];
    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < fibonacci; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    puts("Os termos da sequência de Fibonacci são:");
    for (i = 0; i < fibonacci; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0;
}