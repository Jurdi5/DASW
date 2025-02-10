#include <stdio.h>

void separarParesImpares(int arr[], int n, int pares[], int impares[], int *numPares, int *numImpares) {
    *numPares = 0;
    *numImpares = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            pares[*numPares] = arr[i];
            (*numPares)++;
        } else {
            impares[*numImpares] = arr[i];
            (*numImpares)++;
        }
    }
}

void ordenarArreglo(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, numPares, numImpares;
    printf("Ingrese el numero de parametros a capturar: ");
    scanf("%d", &n);

    int numeros[n];
    int pares[n], impares[n];

    for (int i = 0; i < n; i++) {
        printf("Ingrese el numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    separarParesImpares(numeros, n, pares, impares, &numPares, &numImpares);

    printf("\nNumeros pares: ");
    for (int i = 0; i < numPares; i++) {
        printf("%d ", pares[i]);
    }

    printf("\nNumeros impares: ");
    for (int i = 0; i < numImpares; i++) {
        printf("%d ", impares[i]);
    }

    printf("\n\nImprimiendo ambos arreglos en orden numerico ascendente:\n");
    ordenarArreglo(pares, numPares);
    ordenarArreglo(impares, numImpares);

    printf("Numeros pares ordenados: ");
    for (int i = 0; i < numPares; i++) {
        printf("%d ", pares[i]);
    }

    printf("\nNumeros impares ordenados: ");
    for (int i = 0; i < numImpares; i++) {
        printf("%d ", impares[i]);
    }

    return 0;
}