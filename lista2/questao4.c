#include <stdio.h>

int main(){
    int pedro, jose, ano;
    pedro=110;
    jose=150;
    ano=0;

    while (pedro<=jose){
        pedro+=3;
        jose+=2;
        ano++;
    }

    printf("A quantidade de anos para Pedro ultrapassar Jose é: %d\n", ano);

    return 0;
}
//pedro + 3 e jose + 2 p/ano