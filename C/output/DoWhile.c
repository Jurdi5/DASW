#include <stdio.h>

void imprimirEnReversa(int numero) {
    do {
        int digito = numero % 10; 
        printf("%d", digito); 
        numero = numero / 10; 
    } while (numero > 0);
}

int main() {
    int numero;
    printf("Ingresa un numero entero: ");
    scanf("%d", &numero);
    printf("El numero en reversa es: ");
    imprimirEnReversa(numero);
    return 0;
}