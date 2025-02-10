#include "stdio.h"
/*Declare variables para cada uno de los siguentes conceptos. Asigne modificador, tipo, identificador y valor iniciales 
adecuados a cada uno. Imprima sus valores en consola.
1. Estatura de una persona (metros)
2. Población de ZMG
3. Longitud de una palabra
4. Estado civil = soltero, casado, viudo, divorciado
5. Masa planetaria 
6. La cantidad de centavos del precio de un producto.*/

int main(){
    float Estatura = 1.40;
    printf("Estatura = %f\n", Estatura);
    int poblacion = 4797000;
    printf("Población = %i\n", poblacion);
    int longPalabra = 4;  
    printf("Longitud de palabra = %i\n", longPalabra);
    char estadoCivil[] ="soltero";  
    printf("Estado Civil = %s\n", estadoCivil);  
    double MasaPlanetaria = 6e24;
    int cantidadCentavos = 2;
    printf("Masa planetaria = %f\nCantidad de centavos = %i\n", MasaPlanetaria, cantidadCentavos); 
    
    return 0;
}