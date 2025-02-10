#include <stdio.h>

char convertirAMayuscula(char letra) {
    if (letra >= 'a' && letra <= 'z') {
        return letra - 32;  
    } else {
        return letra;  
    }
}

int main() {
    char letraMinuscula;
    printf("Ingrese una letra minuscula: ");
    scanf(" %c", &letraMinuscula);
    char letraMayuscula = convertirAMayuscula(letraMinuscula);
    if (letraMinuscula != letraMayuscula) {
        printf("La letra mayuscula correspondiente es: %c\n", letraMayuscula);
    } else {
        printf("%c no es una letra minuscula\n", letraMinuscula);
    }
    return 0;
}