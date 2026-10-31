#include <stdio.h>
#define TAM 3

int main(){

    int numeros[TAM];
    float decimais[TAM];
    char letras[TAM];
    double valores[TAM];

    //aqui os números inteiros são declarados
    puts("\nDigite os números inteiros: ");
        for (int i=0; i<TAM; i++){
        scanf("%d", &numeros[i]);
       }

        for (int i = 0; i < TAM; i++){
            printf("Valor: %d | Endereço: %p\n", numeros[i], (void *)&numeros[i]);
        }

    //aqui são os números decimais
    puts("\nDigite os números decimais: ");
        for (int k=0; k<TAM; k++){
            scanf("%f", &decimais[k]);
        }

        for(int k=0; k<TAM; k++){
            printf("Valor: %2f | Endereço: %p\n", decimais[k], (void *)&decimais[k]);
        }

    //aqui são os caracteres
    puts("\nDigite os caracteres: ");
        for(int j=0; j<TAM; j++){
            scanf(" %c", &letras[j]);
        }

        for(int j=0; j<TAM; j++){
            printf("Valor: %2c | Endereço: %p\n", letras[j], (void *)&letras[j]);
        }


    return 0;
}