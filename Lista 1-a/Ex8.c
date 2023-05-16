#include<stdio.h>
int main(){
    double valorfab, dis, imp, v1, v2, valorfinal;
    scanf("%lf %lf %lf", &valorfab, &dis, &imp);
        v1 = valorfab*dis/100;
        v2 = valorfab*imp/100;
        valorfinal = valorfab+v1+v2;
    printf("O VALOR DO CARRO E = %.2lf\n", valorfinal);
    return 0;
}