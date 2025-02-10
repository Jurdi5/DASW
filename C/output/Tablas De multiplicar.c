#include <stdio.h>

void imprimirTablaDeMultiplicar(int numero) {
    int i = 1;
    printf("Tabla de multiplicar del %d:\n", numero);
    while (i <= 10) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    }
}

int main() {
    int tabla;
    printf("Ingrese el numero de la tabla de multiplicar que desea imprimir: ");
    scanf("%d", &tabla);

    imprimirTablaDeMultiplicar(tabla);

    return 0;
}