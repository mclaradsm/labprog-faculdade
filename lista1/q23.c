#include <stdio.h>
#include <math.h>

int main(){
    int x, n, total;
    puts("Digite um número inteiro: ");
    scanf("%d", &x);
    puts("Digite um número para ser o expoente de 2: ");
    scanf("%d", &n);

    total = x * pow(2,n);
    printf("O resultado de %d x 2 elevado a %d é: %d\n", x, n, total);


return 0;
}