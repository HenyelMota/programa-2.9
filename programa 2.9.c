#include <stdio.h>
#include <math.h>

int main()
{
    float RES;      // Declara la variable flotante RES para almacenar el resultado
    int R, T, Q;    // Declara las variables enteras R, T y Q

    printf("Ingrese los valores de R, T y Q:  ");  // Pide al usuario que ingrese los valores de R, T y Q
    scanf("%d %d %d", &R, &T, &Q);                 // Lee tres valores enteros del usuario y los asigna a R, T y Q
    RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2);   // Calcula el resultado de la expresión: R^4 - T^3 + 4 * Q^2
    if(RES < 820)                                  // Verifica si el resultado es menor que 820
    {
        printf("\nR = %d\tT = %d\t Q = %d", R, T, Q); // Si la condición se cumple, imprime los valores de R, T y Q
    }

    return 0;
}
