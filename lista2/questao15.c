#include <stdio.h>
#include <math.h>

int main(){

    int valor=1;

    for(int i=0; i<=7; i++){
        printf("3 elevado a %d é: %d\n", i, valor);
        valor = valor * 3; 
    }

    return 0;
}