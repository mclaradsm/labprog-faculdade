#include <stdio.h>

int main(){
    int x;
    puts("Digite um número inteiro e irei elevar ao quadrado: ");
    scanf("%d", &x);
    printf("O quadrado de %d é %d\n", x, x * x);
    return 0;
}