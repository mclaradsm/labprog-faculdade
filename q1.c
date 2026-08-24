// entrar com valor inteiro e colocar para hexadecimal e octal
#include <stdio.h>

int main(){
    int x;
    puts ("Digite um número: ");
    scanf ("%d", &x);
    
    printf("Hexadecimal: %#x\n", x);
    printf("Octal: %#o\n", x);

return 0;
}