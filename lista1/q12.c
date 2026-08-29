#include <stdio.h>

int main(){
    int a, b, c;
    puts("Digite primeiro o número A: ");
    scanf("%d", &a);

    puts("Digite o número B: ");
    scanf("%d", &b);
    
    c=a;
    a=b;
    b=c;

    printf("Após a troca, A = %d e B = %d\n", a, b);
    return 0;
}