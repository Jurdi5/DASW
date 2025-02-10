#include <stdio.h>
#include <math.h>

int main (){
    float n1;
    float n2;

    printf("Teclee la velocidad: ");
    scanf("%f", &n1);
    printf("Teclee la distancia: ");
    scanf("%f", &n2);
    float tiempoTotal = (n2/(float)n1);
    float horas = fmod(n2, n1);
    float horaR = horas/60;
    

    printf("%f, %f\n", tiempoTotal, horaR);
    
    return 0;
}