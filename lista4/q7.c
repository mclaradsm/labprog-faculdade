#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM 3
//Fa ̧ca um programa em C que gere um vetor com 3 numeros inteiros pseudoaleatorios no intervalo
//[0, 19] e apresente a sua media aritmetica e geometrica.

int main(){
    int vetor[TAM];
    float soma = 0, produto = 1, mediaa, mediag;

    srand(time(NULL));
    for(int i = 0; i < TAM; i++){
        vetor[i] = rand() % 20;
        soma += vetor[i];
        produto *= vetor[i];
    }

    mediaa = soma / TAM;
    mediag = pow(produto, 1.0/TAM);

    printf("Vetor gerado: ");
    for(int i = 0; i < TAM; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Média aritmética: %.2f\n", mediaa);
    printf("Média geométrica: %.2f\n", mediag);

    return 0;
}