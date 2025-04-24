#include <stdio.h>
#include "exercises.h"

int main(void) {
    // Definición de un arreglo de prueba
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Verificación de calcSum
    printf("Suma: %d\n", calcSum(arr, size)); // Esperado: 15

    // Verificación de findMax
    printf("Máximo: %d\n", findMax(arr, size)); // Esperado: 5

    // Verificación de calcAverage
    printf("Promedio: %.5f\n", calcAverage(arr, size)); // Esperado: 3.00000

    // Verificación de countEvens
    printf("Cantidad de pares: %d\n", countEvens(arr, size)); // Esperado: 2

    // Verificación de sumFirstLast
    printf("Suma del primero y último: %d\n", sumFirstLast(arr, size)); // Esperado: 6

    // Verificación de findMin
    printf("Mínimo: %d\n", findMin(arr, size)); // Esperado: 1

    // Definición de otro arreglo para pruebas
    int arr2[] = {5, 4, 3, 2, 1};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Verificación de subtractArraysSum
    printf("Suma de diferencias: %d\n", subtractArraysSum(arr, arr2, size)); // Esperado: 10

    // Verificación de mergeArraysSum
    printf("Suma de arreglos fusionados: %d\n", mergeArraysSum(arr, size, arr2, size2)); // Esperado: 21

    // Verificación de productArray
    printf("Producto: %d\n", productArray(arr, size)); // Esperado: 120

    // Verificación de calcSumAverage
    int sum;
    float average;
    calcSumAverage(arr, size, &sum, &average);
    printf("Suma: %d, Promedio: %.2f\n", sum, average); // Esperado: Suma: 15, Promedio: 3.00

    return 0;
}