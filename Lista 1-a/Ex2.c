#include <stdio.h>
#include <math.h>

int main() {
    double TF, TC, CP, CM;
    scanf("%lf", &TF);
    scanf("%lf", &CP);
    TC = (TF - 32) * 5 / 9;
    CM = CP * 25.4;
    printf("O VALOR EM CELSIUS = %.2lf\n", TC);
    printf("A QUANTIDADE DE CHUVA E = %.2lf\n", CM);
    return 0;
}
