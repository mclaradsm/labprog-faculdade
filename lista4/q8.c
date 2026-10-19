#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

//Fa ̧ca um programa em C que gere um vetor com 100 n ́umeros inteiros pseudoaleat ́orios no intervalo
//definido pelo usu ́ario e apresente esse vetor ordenado (crescente). Fa ̧ca uma vers ̃ao com o m ́etodo
//de ordena ̧c ̃ao por sele ̧c ̃ao e outra pelo m ́etodo bolha (bubble sort).

int main(){
    int vetor[TAM];
    int min, max;

    puts("Digite o valor minimo do intervalo: ");
    scanf("%d", &min);
    puts("Digite o valor maximo do intervalo: ");   
    scanf("%d", &max);

    //OS VETORES TEM QUE SER PREENCHIDOS COM NÚMEROS ALEATÓRIOS ENTRE MIN E MAX
    srand(time(NULL));
    for(int i = 0; i < TAM; i++){
        vetor[i] = rand() % (max - min + 1) + min;
    }

    // Bubble Sort
    for(int i = 0; i < TAM - 1; i++){
        for(int j = 0; j < TAM - i - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    printf("Vetor ordenado (Bubble Sort): ");
    for(int i = 0; i < TAM; i++){
        printf("%d ", vetor[i]);
    }

    // Selection Sort
    for(int i = 0; i < TAM - 1; i++){
        int min_idx = i;
        for(int j = i + 1; j < TAM; j++){
            if(vetor[j] < vetor[min_idx]){
                min_idx = j;
            }
        }
        int temp = vetor[min_idx];
        vetor[min_idx] = vetor[i];
        vetor[i] = temp;
    }

    printf("\nVetor ordenado (Selection Sort): ");
    for(int i = 0; i < TAM; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}