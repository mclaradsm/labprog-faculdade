#include <stdio.h>

int main(){
    int x,y;
    puts("Digite o valor de x: ");
    scanf("%d", &x);
    puts("Digite o valor de y: ");
    scanf("%d", &y);

    (x%y==0) ? printf("O número %d é múltiplo de %d", x, y) : printf("O número %d não é múltiplo de %d", x, y);
    (y%x==0) ? printf("O número %d é múltiplo de %d", y, x) : printf("O número %d não é múltiplo de %d", y, x);

return 0;
}