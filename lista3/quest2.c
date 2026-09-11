#include <stdio.h>

int main (){
    int ac, pc, vc, ac1, pc1, vc1;
    int ax, px, vx;
    int a1, p1, v1, a2, p2, v2, dist1, dist2;

    puts("Digite o valor da área, do perímetro e do volume do centróide 1: ");
    scanf("%d %d %d", &ac, &pc, &vc);
    puts("Digite o valor da área, do perímetro e do volume do centróide 2: ");
    scanf("%d %d %d", &ac1, &pc1, &vc1);

    while (1){
        puts("Digite o valor da área, do perímetro e do volume do objeto X para descobrir de qual centróide é: ");
        scanf("%d %d %d", &ax, &px, &vx);
        a1 = abs(ax - ac);
        p1 = abs(px - pc);
        v1 = abs(vx - vc);
        a2 = abs(ax - ac1);
        p2 = abs(px - pc1);
        v2 = abs(vx - vc1);

        if (a1 >= p1 && p1 >= v1){
            dist1 = a1;
        }else if (p1 >= a1 && a1 >= v1){
            dist1 = p1;
        }else{
            dist1 = v1;
        }

        if (a2 >= p2 && p2 >= v2){
            dist2 = a2;
        }else if (p2 >= a2 && a2 >= v2){
            dist2 = p2;
        }else{
            dist2 = v2;
        }

        if (dist1 < dist2){
            puts("O objeto X pertence ao centróide 1.");
        }else{
            puts("O objeto X pertence ao centróide 2.");
        }


    }



return 0;
}