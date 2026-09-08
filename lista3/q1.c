#include <stdio.h>
#include <stdlib.h>

int main(){
    int a1, p1, v1, a2, p2, v2, a, p, v;

    puts ("Digite a área, o perímetro e o vértice referente ao objeto A: ");
    scanf ("%d %d %d", &a1, &p1, &v1);
    puts ("Digite a área, o perímetro e o vértice referente ao objeto B: ");
    scanf ("%d %d %d", &a2, &p2, &v2);

    a = abs(a2 - a1);
    p = abs(p2 - p1);
    v = abs(v2 - v1);

    if (a>= p && p >= v){
        printf("A distância entre os objetos A e B é: %d", a);
    }else if (p >= a && a >= v){
        printf("A distância entre os objetos A e B é: %d", p);
    }else{
        printf("A distância entre os objetos A e B é: %d", v);
    }

    return 0;
}