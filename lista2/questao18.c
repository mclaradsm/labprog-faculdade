#include <stdio.h>

int main() {
    int grao, i;

    grao = 0;
    for (i=0; i<=64; i++){
        grao += i;
    }
    printf("O total de grãos de trigo no tabuleiro é: %d\n", grao);




return 0;
}