#include<stdio.h>
    int main(){
        double hora, min, seg, hm, ms, hs;
        scanf("%lf %lf %lf", &hora, &min, &seg);
        hm = hora*3600;
        ms = min*60;
        hs = hm+ms+seg;
        printf("O TEMPO EM SEGUNDOS E = %.0lf\n", hs);

        return 0;
    }