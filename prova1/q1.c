#include <stdio.h>

int main(){
    unsigned char R, G, B, M;
    unsigned char b2, b1, b0;

    printf("Digite um R, G e um B: ");
    scanf("%hhu %hhu %hhu", &R, &G, &B);

    puts("Digite um M: ");
    scanf("%hhu", &M);

    b2= (M>> 2)& 1;
    b1= (M>> 1)& 1;
    b0= M & 1;

    R= (R & 254) | b2;
    G= (G & 254) | b1;
    B= (B & 254) | b0;

    printf("R= %hhu\n", R);
    printf("G= %hhu\n", G);
    printf("B= %hhu\n", B);


    return 0;
}