#include <stdio.h>

int main(){
    int dias;
    puts("Informe o número de dias trabalhados: ");
    scanf("%d", &dias);
    printf("O salário líquido: %.2f\n", (float)dias * 50.25);
    puts("O salário após possíveis bonificações e descontos do imposto de renda: ");

    if (dias <=10){
        printf("O salário não possui bonificação. Salário final: %.2f\n", (float)dias * 50.25* 0.9);
    }
    else if (dias <= 20){
        printf("Parabéns, vcê ganhou uma bonificação de 20%%! Salário final: %.2f\n", (float)dias * 50.25 * 1.2*0.9);
    }
    else{
        printf("Parabéns, você ganhou uma bonificação de 30%%! Salário final: %.2f\n", (float)dias * 50.25 * 1.3*0.9);
    }


    return 0;
}