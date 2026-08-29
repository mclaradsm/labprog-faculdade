#include <stdio.h>

int main(){
    float c, l, h, v;
    puts("Digite o comprimento: ");
    scanf("%f", &c);
    puts("Digite a largura: ");
    scanf("%f", &l);
    puts("Digite a altura: ");
    scanf("%f", &h);

    v = c * l * h;
    printf("O volume da caixa é: %.2f\n", v);
    return 0;
}