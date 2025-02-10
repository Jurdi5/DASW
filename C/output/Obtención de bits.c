#include <stdio.h>

int main() {
    unsigned char n1;
    printf("Cual es tu numero: ");
    scanf("%d", &n1);
    int bit1 = n1 & 1;
    if (bit1 == 1){
        printf("Tu numero es impar\n");
    } else {
        printf("Tu numero es par\n");
    }
    int bit2 = (n1 >> 2) & 1;
    int bit3 = (n1 >> 1) & 1;
    printf("Los 3 ultimos bits de %d son: %d %d %d\n", n1, bit3, bit2, bit1);
    /*¿Cómo puedo obtener la máscara de una dirección de IP de un equipo?
    Dependiendo del equipo sera dependiendo de en donde pero normalmente se puede encontrar 
    utilizando los comandos adecuados desde el sistema*/
    return 0;
}