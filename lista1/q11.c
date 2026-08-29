#include <stdio.h>

int main(){
    int x,y;

    puts("Digite dois números para eu fazer as operações: ");
    scanf("%d %d", &x, &y);

    printf("A soma é: %d\n", x+y);
    printf("A subtração é: %d\n", x-y);
    printf("A multiplicação é: %d\n", x*y); 
    printf("A divisão é: %.2f\n", (float)x/y);
    printf("O resto da divisão é: %d\n", x%y);
    
    return 0;
}