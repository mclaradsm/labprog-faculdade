#include <stdio.h>

int main(){
    int i, j, fatorial;
    for(i=1; i<=10; i+=2){
        fatorial = 1;
        for(j=1; j<=i; j++){
            fatorial *= j;
        }
        printf("O fatorial de %d é: %d\n", i, fatorial);
    }

return 0;
}