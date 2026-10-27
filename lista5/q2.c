#include <stdio.h>

int main(){
    int a, b;
    int *pa, *pb;

    puts("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    pa = &a;
    pb = &b;

    printf("Valores digitados: %d e %d\n", *pa, *pb);

    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    printf("Valores após a troca: %d e %d\n", *pa, *pb);

    return 0;
}