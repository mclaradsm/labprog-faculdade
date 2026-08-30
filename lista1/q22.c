#include <stdio.h>

int main(){
    int x;
    puts("Digite um número com 3 dígitos para eu trocar a ordem: ");
    scanf("%d", &x);
    printf("O número digitado foi: %d\n", x);
    printf("O número invertido é: %d%d%d\n", x%10, (x/10)%10, x/100);

return 0;
}