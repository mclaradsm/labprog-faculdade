#include <stdio.h>

int main(){
    int a=0, b=0;
    for (int i=0; i<=200; i++){
        if (i <=100 &&i % 3 == 0){
            a += i;
        } else if (i>=100 && i % 5 == 0){
            b += i;
        }
    }
    printf("A soma dos múltiplos de 3 entre 0 e 200 é: %d\n", a);
    printf("A soma dos múltiplos de 5 entre 100 e 200 é: %d\n", b);

    return 0;
}