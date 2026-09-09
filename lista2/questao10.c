#include <stdio.h>

int main(){
    int i,valor;
    for (i=15; i<=90; i++){
        if (i%4==0){
            printf("%d\n", i*i);
        }
    }

    return 0;
}