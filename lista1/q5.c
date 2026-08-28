#include <stdio.h>

int main(){
    char sexo;
    float altura;
    puts("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    puts("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo=='M'){
        printf("O peso ideal é: %.2f\n", (72.7*altura)-58);
    }
    else if (sexo=='F'){
        printf("O peso ideal é: %.2f\n", (62.1*altura)-44.7);
    }
    else{
        puts("Sexo inválido!");
    }

    return 0;
}