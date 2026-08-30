#include <stdio.h>

int main(){
    float salario, valorh, horasmes, desconto, salariobruto, salarioliquido;
    puts("Digite o valor da hora trabalhada: ");
    scanf("%f", &valorh);

    puts("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &horasmes);

    puts("Digite o percentual de desconto do INSS: ");
    scanf("%f", &desconto);

    salariobruto = valorh * horasmes;
    salarioliquido = salariobruto - (salariobruto * desconto / 100);

    printf("O salário bruto é: %.2f\n", salariobruto);
    printf("O salário líquido é: %.2f\n", salarioliquido);

return 0;
}