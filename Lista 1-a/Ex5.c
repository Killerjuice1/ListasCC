#include<stdio.h>
#include<math.h>

    int main(){
        double haltura, aresta, areabase, vol;
        scanf("%lf %lf", &haltura,&aresta);
        areabase = (3*aresta*aresta*sqrt(3))/2;
        vol = (1.0/3.0)*areabase*haltura;
        printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", vol);
        return 0;
    }