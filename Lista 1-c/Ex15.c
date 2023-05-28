#include <stdio.h>
#include <math.h>

int main(){
    double n, e, r, erro;

    // Leitura do número e do erro
    scanf("%lf", &n);
    scanf("%lf", &e);

    r = 1.0; // Aproximação inicial
    erro = fabs(n - r * r); // Cálculo do erro inicial

    while (erro > e) {
        printf("r: %.9lf, erro: %.9lf\n", r, erro);
        r = (r + n / r) / 2.0; // Atualização da aproximação
        erro = fabs(n - r * r); // Cálculo do novo erro
    }

    printf("r: %.9lf, erro: %.9lf\n", r, erro);

    return 0;
}
