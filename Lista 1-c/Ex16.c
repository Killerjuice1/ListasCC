#include <stdio.h>

int main() {
    double ValorIngresso, ValorInicial, ValorFinal;

    printf("Digite o valor do ingresso: ");
    if (scanf("%lf", &ValorIngresso) != 1) {
        printf("Valor de ingresso inválido.\n");
        return 1;
    }

    printf("Digite o valor inicial: ");
    if (scanf("%lf", &ValorInicial) != 1) {
        printf("Valor inicial inválido.\n");
        return 1;
    }

    printf("Digite o valor final: ");
    if (scanf("%lf", &ValorFinal) != 1) {
        printf("Valor final inválido.\n");
        return 1;
    }

    if (ValorInicial >= ValorFinal) {
        printf("INTERVALO INVALIDO.\n");
        return 1;
    }

    double lucroMaximo = 0.0;
    int numIngressosVendidos = 0;
    double melhorValorFinal = 0.0;

    for (double valor = ValorInicial; valor <= ValorFinal; valor += 0.01) {
        int numIngressos;
        double lucro;

        if (valor == ValorIngresso) {
            numIngressos = 120;
            lucro = (valor - 0.05 * numIngressos - 200.0) * numIngressos;
        } else if (valor > ValorIngresso) {
            numIngressos = 120 - 30;
            lucro = (valor - 0.05 * numIngressos - 200.0) * numIngressos;
        } else {
            numIngressos = 120 + 25;
            lucro = (valor - 0.05 * numIngressos - 200.0) * numIngressos;
        }

        printf("V: %.2lf, N: %d, L: %.2lf\n", valor, numIngressos, lucro);

        if (lucro > lucroMaximo) {
            lucroMaximo = lucro;
            numIngressosVendidos = numIngressos;
            melhorValorFinal = valor;
        }
    }

    printf("Melhor valor final: %.2lf\n", melhorValorFinal);
    printf("Lucro: %.2lf\n", lucroMaximo);
    printf("Numero de ingressos: %d\n", numIngressosVendidos);

    return 0;
}
