#include <stdio.h>

int main(){
    float numeros [15];
    float maior = 0, menor = 0;

    for(int i=0; i<15; i++){
        printf("Digite um número: ");
        scanf("%f", &numeros[i]);
    }

    maior = numeros[0];
    menor = numeros[0];

    for(int i=1; i<15; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }
        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }

    printf("O maior número é: %.2f\n", maior);
    printf("O menor número é: %.2f\n", menor);  
    printf("A soma dos números é: %.2f\n", maior + menor);
    return 0;
}