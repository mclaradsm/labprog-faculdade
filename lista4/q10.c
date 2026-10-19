#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 5
#define COL 5

int main(){
    int matriz[LIN][COL];
    int x, contador = 0;

    srand(time(NULL));
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            matriz[i][j] = rand() % 10;
        }
    }

    puts("Matriz gerada: ");
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    puts("Digite um valor inteiro x: ");
    scanf("%d", &x);

    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            if(matriz[i][j] == x){
                contador++;
            }
        }
    }

    printf("O valor %d aparece %d vezes na matriz.\n", x, contador);

    return 0;
}