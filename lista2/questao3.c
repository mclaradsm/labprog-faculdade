#include <stdio.h>

int main(){
    int f;
    puts("Digite um número inteiro e positivo para calcular o fatorial: \n");
    scanf("%d", &f);

    for (int i = f - 1; i > 0; i--){
        f *= i;
    }

    printf("O fatorial é: %d\n", f);

    return 0;
}