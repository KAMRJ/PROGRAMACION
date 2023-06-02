#include <stdio.h>
#include "funcion.h"

double calcularDeterminante(double matriz[3][3])
{
    double determinante;
    determinante = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[2][1] * matriz[1][2]) - matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[2][0] * matriz[1][2]) + matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[2][0] * matriz[1][1]);
    return determinante;
}

void resolverSistema(double coeficientes[3][3], double constantes[3])
{
    double matrizPrincipal[3][3];
    double matrizX[3][3];
    double matrizY[3][3];
    double matrizZ[3][3];
    double determinantePrincipal, determinanteX, determinanteY, determinanteZ;
    double solucionX, solucionY, solucionZ;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizPrincipal[i][j] = coeficientes[i][j];
            matrizX[i][j] = coeficientes[i][j];
            matrizY[i][j] = coeficientes[i][j];
            matrizZ[i][j] = coeficientes[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        matrizX[i][0] = constantes[i];
        matrizY[i][1] = constantes[i];
        matrizZ[i][2] = constantes[i];
    }

    determinantePrincipal = calcularDeterminante(matrizPrincipal);
    determinanteX = calcularDeterminante(matrizX);
    determinanteY = calcularDeterminante(matrizY);
    determinanteZ = calcularDeterminante(matrizZ);

    solucionX = determinanteX / determinantePrincipal;
    solucionY = determinanteY / determinantePrincipal;
    solucionZ = determinanteZ / determinantePrincipal;

    printf("Solucion:\n");
    printf("x = %.3f\n", solucionX);
    printf("y = %.3f\n", solucionY);
    printf("z = %.3f\n", solucionZ);
}