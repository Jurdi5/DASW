#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    float LadoA;
    float LadoB;
    float LadoC;
    printf("Cuanto mide el lado A: ");
    scanf("%f", &LadoA);
    printf("Cuanto mide el lado B: ");
    scanf("%f", &LadoB);
    printf("Cuanto mide el lado C: ");
    scanf("%f", &LadoC);
    float ladoA = pow(LadoA, 2);
    float ladoB = pow(LadoB, 2);
    float ladoC = pow(LadoC, 2);
    if (ladoA + ladoB == ladoC){
        printf("Tu triangulo es rectangulo");
    } else {
        printf("Tu triangulo no es rectangulo");
    }


    return 0;
}