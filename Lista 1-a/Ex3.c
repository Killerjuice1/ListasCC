#include<stdio.h>
int main(){
    double raio, halt, valc, pi, areat, AC, AT;
    scanf("%lf %lf", &raio, &halt);
    pi = 3.14159;
    AC = pi*raio*raio;
    AT = 2*pi*raio*halt;
    areat = 2*AC+AT;
    valc = (areat*100);
    printf("O VALOR DO CUSTO E = %.2lf\n", valc);

    return 0;
}