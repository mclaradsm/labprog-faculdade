#include <stdio.h>

int main(){
    unsigned char n, x, menor, maior;
    float normal;
    int i;
     
    puts ("Digite a quantidade de pixels: ");
    scanf("%hhu", &n);

    puts("Digite o pixel 1: ");
    scanf("%hhu", &x);

    menor = x;
    maior = x;

    for(i=2; i<= n; i++){
        printf("Digite a amostra %d: ", i);
        scanf("%hhu", &x);

        if(x<menor){
            menor=x;
        }else if (x>maior){
            maior=x;
        }
    }
    puts("Digite um valor para ser normalizado: ");
    printf("obs: tem que estar entre o intervalo de %hhu e %hhu!\n", menor, maior);
    scanf("%hhu", &x);

    normal= (float)(x-menor)/(maior-menor);

    printf("O valor de x normalizado é: %.2f!", normal);

    return 0;
}