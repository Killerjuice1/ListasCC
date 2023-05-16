#include <stdio.h>
#include <math.h>

int main() {
double massa, aceleracao, tempo, velocidade, espaco, trabalho;
scanf("%lf", &massa);
scanf("%lf", &aceleracao);
scanf("%lf", &tempo);

velocidade = (aceleracao * tempo) * 3.6;
espaco = (aceleracao * pow(tempo, 2)) / 2;
massa = massa * 1000;
trabalho = (massa * pow(velocidade/3.6, 2)) / 2;

printf("VELOCIDADE = %.2lf\n", velocidade);
printf("ESPACO PERCORRIDO = %.2lf\n", espaco);
printf("TRABALHO REALIZADO = %.2lf\n", trabalho);

return 0;
}