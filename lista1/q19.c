#include <stdio.h>

int main(){
    int x;
    puts("Digite um número inteiro para saber se é par ou ímpar: ");
    scanf("%d", &x);
    (x % 2 == 0) ? puts("Seu número é par") : puts("Seu número é ímpar");

    return 0;
}