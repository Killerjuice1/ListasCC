#include <stdio.h>

#define NUM_PROVAS 8
#define NUM_LISTAS 5
#define CARGA_HORARIA 128
#define NOTA_MINIMA 6.0
#define PRESENCA_MINIMA 0.75

int main() {
    int matricula;
    double notas_provas[NUM_PROVAS];
    double notas_listas[NUM_LISTAS];
    double nota_trabalho;
    int presenca;

    while (1) {
        scanf("%d", &matricula);
        if (matricula == -1) {
            break;
        }

        double soma_provas = 0.0;
        double soma_listas = 0.0;
        double media_provas, media_listas, nota_final;
        int i;

        for (i = 0; i < NUM_PROVAS; i++) {
            scanf("%lf", &notas_provas[i]);
            soma_provas += notas_provas[i];
        }
        media_provas = soma_provas / NUM_PROVAS;

        for (i = 0; i < NUM_LISTAS; i++) {
            scanf("%lf", &notas_listas[i]);
            soma_listas += notas_listas[i];
        }
        media_listas = soma_listas / NUM_LISTAS;

        scanf("%lf %d", &nota_trabalho, &presenca);

        nota_final = 0.7 * media_provas + 0.15 * media_listas + 0.15 * nota_trabalho;

        if (nota_final >= NOTA_MINIMA && presenca >= CARGA_HORARIA * PRESENCA_MINIMA) {
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n", matricula, nota_final);
        } else if (nota_final < NOTA_MINIMA && presenca >= CARGA_HORARIA * PRESENCA_MINIMA) {
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", matricula, nota_final);
        } else if (nota_final >= NOTA_MINIMA && presenca < CARGA_HORARIA * PRESENCA_MINIMA) {
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", matricula, nota_final);
        } else {
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, nota_final);
        }
    }

    return 0;
}
