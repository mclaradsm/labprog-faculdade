#include <stdio.h>

int main(){
    int x,y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    printf("A soma é: %d\n", x+y);
    printf("A subtração é: %d\n", x-y);
    printf("A multiplicação é: %d\n", x*y);
    printf("A divisão é: %d\n", x/y);
    printf("O resto da divisão é: %d\n", x%y);
    
    return 0;
}