#include <stdio.h>

int main(){
    int a, b, i, soma = 0,soma2 = 0,c;
    puts("Digite dois números, a faixa entre eles será feito a somatória: ");
    scanf("%d %d", &a, &b);

    if (a>b){
        c = a;
        a = b;
        b = c;
    }

    for (i = a; i <= b; i++){
        soma += i;
    }
    printf("A somatória dos números entre %d e %d é: %d\n", a, b, soma);


    return 0;
}