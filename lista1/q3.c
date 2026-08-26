#include <stdio.h>

int main(){
    double x;
    puts ("Digite um número: ");
    scanf ("%lf", &x);
    
    printf("O dobro de x é: %.2lf\n", 2*x);
    printf("O triplo de x é: %.2lf\n", 3*x);
    printf("A metade de x é: %.2lf\n", x/2);

    return 0;
}