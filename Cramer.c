#include <stdio.h>
#include "funcion.h"

int main() {
    double coeficientes[3][3];
    double constantes[3];

    printf("Ingrese los coeficientes del sistema de ecuaciones:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Coeficiente a%d%d: ", i + 1, j + 1);
            scanf("%lf", &coeficientes[i][j]);
        }
    }

    printf("Ingrese las constantes del sistema de ecuaciones:\n");
    for (int i = 0; i < 3; i++) {
        printf("Constante b%d: ", i + 1);
        scanf("%lf", &constantes[i]);
    }

    resolverSistema(coeficientes, constantes);

    return 0;
}