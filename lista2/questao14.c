#include <stdio.h>

int main(){
    int a, b, i, divisao = 0, c;
    puts("Digite dois números, a faixa entre eles será feita a contagem de números divisíveis por 3: ");
    scanf("%d %d", &a, &b);

    if (a>b){
        c = a;
        a = b;
        b = c;
    }

    for (i = a; i <= b; i++){
        if (i % 3 == 0){
            divisao++;
        }
    }
    printf("A quantidade de números divisíveis por 3 entre %d e %d é: %d\n", a, b, divisao);


    return 0;
}