#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    unsigned char armario=0;
    int opcao, numero, sorteado;

    srand(time(NULL));

    do{
    puts("A seguir estão as instruções, digite sua opção: ");
    puts("1-Oculpar o armário");
    puts("2-Liberar o armário");
    puts("3-Sair");
    scanf("%d", &opcao);

        switch(opcao){

            case 1:
                if (armario==255){
                    puts("Todos os armários estão ocupados\n");
                }else{
                    do{
                        sorteado=rand()%8;
                    }while(armario & (1 << sorteado));
                    armario |= (1 << sorteado);
                    printf("Armário %d ocupado com sucesso!\n", sorteado);
                }
                break;

            case 2: 
                puts("Digite o número do armário que deseja liberar (0 a 7): \n");
                scanf("%d", &numero);
                if (numero<0 || numero>7){  
                    puts("Número inválido, digite um número entre 0 e 7\n");
                }else if (!(armario & (1 << numero))){
                    puts("Armário já está livre\n");
                }else{ 
                    armario &= ~(1 << numero);
                    printf("Armário %d liberado com sucesso!\n", numero);
                }   
                break;

            case 3:
                puts("Saindo do programa...\n");
                break;

            default:
                puts("Opção inválida, digite uma opção válida\n");
                break;

        }
    }while(opcao!=3);

return 0;
}