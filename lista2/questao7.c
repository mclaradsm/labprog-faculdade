#include <stdio.h>

int main(){
    int x, y, z;
    puts("Digite dois números interiros:");
    scanf("%d %d", &x, &y);

    while (x == 0 || y == 0){
        puts("Digte um número diferente de 0:");
        scanf("%d %d", &x, &y);        
    }
    z = x/y;

    printf("O resultado da divisão é: %d\n", z);

    return 0;
}