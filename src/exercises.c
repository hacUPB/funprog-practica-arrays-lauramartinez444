#include "exercises.h"

// -------------------------------
// Functions that return a single value
// -------------------------------

int calcSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int findMax(int arr[], int n) {
    if (n == 0) return 0; // Manejo de caso de arreglo vacío
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

float calcAverage(int arr[], int n) {
    if (n == 0) return 0.0; // Manejo de caso de arreglo vacío
    int sum = calcSum(arr, n);
    return (float)sum / n;
}

int countEvens(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int sumFirstLast(int arr[], int n) {
    if (n == 0) return 0; // Manejo de caso de arreglo vacío
    return arr[0] + arr[n - 1];
}

int findMin(int arr[], int n) {
    if (n == 0) return 0; // Manejo de caso de arreglo vacío
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int subtractArraysSum(int a[], int b[], int n) {
    int sumDiff = 0;
    for (int i = 0; i < n; i++) {
        sumDiff += a[i] - b[i];
    }
    return sumDiff;
}

int mergeArraysSum(int a[], int n1, int b[], int n2) {
    int totalSum = 0;
    for (int i = 0; i < n1; i++) {
        totalSum += a[i];
    }
    for (int i = 0; i < n2; i++) {
        totalSum += b[i];
    }
    return totalSum;
}

int productArray(int arr[], int n) {
    if (n == 0) return 0; // Manejo de caso de arreglo vacío
    int product = 1;
    for (int i = 0; i < n; i++) {
        product *= arr[i];
    }
    return product;
}

// -------------------------------
// Function that returns multiple values via pointer
// -------------------------------

void calcSumAverage(int arr[], int n, int *sum, float *average) {
    *sum = calcSum(arr, n);
    *average = calcAverage(arr, n);
}