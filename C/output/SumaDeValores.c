#include <stdio.h>

int sumaParesRecursiva(int inicio, int fin) {
    if (inicio > fin) {
        return 0;
    } else if (inicio % 2 != 0) {
        return sumaParesRecursiva(inicio + 1, fin);
    } else {
        return inicio + sumaParesRecursiva(inicio + 2, fin);
    }
}

int main() {
    int inicio, fin;
    printf("Cual es tu rango de inicio: ");
    scanf("%d", &inicio);
    printf("Cual es tu rango final: ");
    scanf("%d", &fin);
    int resultado = sumaParesRecursiva(inicio, fin);
    printf("La suma de los numeros pares entre %d y %d es: %d\n", inicio, fin, resultado);
    return 0;
}