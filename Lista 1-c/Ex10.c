#include <stdio.h>

int main(){
    double n, i, K, s;
    double j;

    scanf("%lf", &n);
    scanf("%lf", &i);
    scanf("%lf", &K);
    scanf("%lf", &s);

    printf("Tabuada de soma:\n");
    for (j = i; j <= i + (K - 1) * s; j += s) {
        double resultado = n + j;
        printf("%.2lf + %.2lf = %.2lf\n", n, j, resultado);
    }

    printf("Tabuada de subtracao:\n");
    for (j = i; j <= i + (K - 1) * s; j += s) {
        double resultado = n - j;
        printf("%.2lf - %.2lf = %.2lf\n", n, j, resultado);
    }

    printf("Tabuada de multiplicacao:\n");
    for (j = i; j <= i + (K - 1) * s; j += s) {
        double resultado = n * j;
        printf("%.2lf x %.2lf = %.2lf\n", n, j, resultado);
    }

    printf("Tabuada de divisao:\n");
    for (j = i; j <= i + (K - 1) * s; j += s) {
        double resultado = n / j;
        printf("%.2lf / %.2lf = %.2lf\n", n, j, resultado);
    }

    return 0;
}
