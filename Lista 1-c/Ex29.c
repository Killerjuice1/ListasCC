#include <stdio.h>
#include <math.h>

int fatorial(int n) {
    int resultado = 1;
    int i;
    
    for (i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

double calcularSeno(double x, int N) {
    double seno = 0.0;
    int sinal = 1;
    int n;
    
    for (n = 0; n <= N; n++) {
        seno += sinal * pow(x, 2 * n + 1) / fatorial(2 * n + 1);
        sinal *= -1;
    }
    
    return seno;
}

int main() {
    double x;
    int N;
    
    scanf("%lf", &x);
    scanf("%d", &N);
    
    double resultado = calcularSeno(x, N);
    
    printf("seno(%.2lf) = %.6lf\n", x, resultado);
    
    return 0;
}
