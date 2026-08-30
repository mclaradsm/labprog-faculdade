#include <stdio.h>

int main(){
    int x;
    puts("Digite um número e lhe darei seu módulo: ");
    scanf("%d", &x);
    x = (x > 0) ? x : -x;
    printf("O módulo do número é: %d\n", x);

    return 0;
}