#include <stdio.h>

int main (){
     float conta=0;
    puts("Quanto foi a conta? ");
   scanf("%f", &conta);
    conta = conta * 1.1;

    printf("O total da conta foi: %f", conta);

return 0;
}