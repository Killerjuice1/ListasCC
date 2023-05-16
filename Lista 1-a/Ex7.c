#include<stdio.h>
#include<math.h>

    int main(){
        double l1,l2,l3,at,t;
        scanf("%lf %lf %lf", &l1, &l2, &l3);
        t = (l1+l2+l3)/2;
        at = sqrt(t*(t-l1)*(t-l2)*(t-l3));
        printf("A AREA DO TRIANGULO E = %.2lf", at);



        return 0;
    }