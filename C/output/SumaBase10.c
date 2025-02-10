#include <stdio.h>

int sumaDigitosRecursiva(int numero) {
    if (numero == 0) {
        return 0;
    } else {
        return (numero % 10) + sumaDigitosRecursiva(numero / 10);
    }
}

int main() {
    int numero = 12345;
    int resultado = sumaDigitosRecursiva(numero);
    printf("La suma de los digitos de %d es: %d\n", numero, resultado);
    return 0;
}