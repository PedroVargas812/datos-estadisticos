#include <stdio.h>
#include "funciones.h"

int main() {
    float numeros[10];
    float numordenados[10];
    float min, max, mediana, media;
    int moda;
    // Ingresar los 10 números
    printf("Ingrese 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    // Calcular los valores requeridos usando las funciones
    ordenarArreglo(numeros, numordenados, &min, &max, &mediana);
    mediaymoda(numeros, &media, &moda);

    // Mostrar los resultados
    printf("\nResultados:\n");
    printf("Media aritmetica: %.2f\n", media);
    printf("Moda: %d\n", moda);
    printf("Mediana: %.2f\n", mediana);
    printf("Valor minimo: %.2f\n", min);
    printf("Valor maximo: %.2f\n", max);

    return 0;
}
