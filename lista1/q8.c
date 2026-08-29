#include <stdio.h>

int main (){
    int x;
    puts("Digite um número inteiro: ");
    scanf("%d", &x);

    printf("O número digitado foi %d\n", x);
    printf("O antecessor de %d é %d\n", x, x - 1);
    printf("O sucessor de %d é %d\n", x, x + 1);

    return 0;
}