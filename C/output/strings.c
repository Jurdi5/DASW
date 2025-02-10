#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    int longitud, vocales, consonantes;

    printf("Introduce una cadena de caracteres solo con letras: ");
    scanf("%s", cadena);

    // Calcular el tamaño de la cadena
    longitud = strlen(cadena);

    // Inicializar contadores de vocales y consonantes
    vocales = 0;
    consonantes = 0;

    // Recorrer la cadena y contar vocales y consonantes
    for (int i = 0; i < longitud; i++) {
        if (cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u') {
            vocales++;
        } else if (isalpha(cadena[i])) {
            consonantes++;
        }
    }

    // Imprimir el tamaño de la cadena, el número de vocales y consonantes
    printf("Tamaño de la cadena: %d\n", longitud);
    printf("Número de vocales: %d\n", vocales);
    printf("Número de consonantes: %d\n", consonantes);

    // Convertir las vocales a su código l33t
    for (int i = 0; i < longitud; i++) {
        switch (cadena[i]) {
            case 'a':
                cadena[i] = '4';
                break;
            case 'e':
                cadena[i] = '3';
                break;
            case 'i':
                cadena[i] = '1';
                break;
            case 'o':
                cadena[i] = '0';
                break;
            case 'u':
                cadena[i] = 'U';
                break;
        }
    }

    // Imprimir la cadena l33t
    printf("Cadena l33t: %s\n", cadena);

    return 0;
}
