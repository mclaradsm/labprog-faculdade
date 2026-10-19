//Fa ̧ca um programa que leia uma matriz bidimensional do usu ́ario, de dimens ̃ao 3x3, e apresente os
//elementos da diagonal principal.

#include <stdio.h>
#define TAM 3

int main(){
    int matriz[TAM][TAM];

    puts("Digite os elementos da matriz 3x3: ");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Elementos da diagonal principal: ");
    for(int i = 0; i < TAM; i++){
        printf("%d ", matriz[i][i]);
    }

    return 0;
}