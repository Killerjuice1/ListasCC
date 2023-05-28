#include <stdio.h>

int main(){
    int matricula;
    double horasTrabalhadas, valorHora, salario;

    while (1) {
        scanf("%d %lf %lf", &matricula, &horasTrabalhadas, &valorHora);

        if (matricula == 0)
            break;

        salario = horasTrabalhadas * valorHora;

        printf("%d %.2lf\n", matricula, salario);
    }

    return 0;
}
