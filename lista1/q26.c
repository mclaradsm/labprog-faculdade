#include <stdio.h>
#include <math.h>

int main(){
    float x, y, z;
    puts("Digite 3 números para obter as médias: ");
    scanf("%f %f %f", &x, &y, &z);
    printf("A média aritmetica é: %.2f\n", (x+y+z)/3);
    printf("A média geométrica é: %.2f\n", pow(x*y*z, 1.0/3.0));

    return 0;
}