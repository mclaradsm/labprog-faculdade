#include <stdio.h>

int main(){
    int *pont1, *pont2, *pont3;
    int a, b, soma;

    puts("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    pont1 = &a;
    pont2 = &b;
    pont3 = &soma;

    *pont3 = *pont1 + *pont2;

    printf("A soma dos ponteiros %d + %d: %d\n", *pont1, *pont2, *pont3);

    printf("O endereço do ponteiro 1 é: %p\n", (void*)pont1);
    printf("O endereço do ponteiro 2 é: %p\n", (void*)pont2);

    return 0;
}