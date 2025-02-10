#include "stdio.h"

int main(){
    int edad = 28;
    printf("Edad = %d, %i, %x, %X, %o\n", edad, edad*2, edad, edad, edad);
    char letra = 'G';
    printf("Letra = %c, %d\n", 28, letra);

    float f1 = 3.1416;
    float f2 = 54.125;
    printf("fi = %f, %g, %e, %E, %.2f\n", f1, f1, f2, f2, f2);
    double d1 = 3.1215926535;
    printf("d1 = %g\n", d1);

    int entero = 2147483647;
    printf("Entero = %u, +1 = %u\n", entero, entero+1);
    unsigned uentero = 2147483647;
    printf("uEntero = %d, +1 = %u\n", uentero, uentero+1);

    unsigned short int usEntero = 65535;
    printf("Short = %d\n", usEntero+1);

    unsigned long long int Enterolargo = 0xFFFFFFFFFFFFFFFF;
    printf("Entero Largo = %llu\n", Enterolargo+1);



    return 0;
}