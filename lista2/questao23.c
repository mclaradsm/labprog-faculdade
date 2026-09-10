#include <stdio.h>

int main() {
    int a , b;
    
    puts("Digite o valor de a: ");
    scanf("%d", &a);
    puts("Digite o valor de b: ");
    scanf("%d", &b);

    ++a;
    printf("Após pre-incremento: a = %d\n", a);

    b++;
    printf("Após pos-incremento: b = %d\n", b);

    return 0;
}