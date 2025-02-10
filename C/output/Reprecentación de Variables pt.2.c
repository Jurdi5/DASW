#include <stdio.h>
#include <math.h>
int main (){
    float n1;
    float n2;
    float n3;
    float Promedio;
    float Residuo;

    printf("Teclee el primer numero: ");
    scanf("%f", &n1);
    printf("Teclee el segundo numero: ");
    scanf("%f", &n2);
    printf("Teclee el tercer numero: ");
    scanf("%f", &n3);   
    printf("%f, %f, %f\n", n1, n2, n3);
    Promedio = (n1 + n2 + n3)/(3);
    Residuo = fmod(n1, n3);
    printf("El promedio es %f\n", Promedio);
    printf("El residuo de la divicion entre el primero y el tercero es %f\n", Residuo);
    n1 += 1;
    printf("El primer numero incrementado en 1 da: %f\n",n1);
    n2 += 5;
    printf("El segundo numero incrementado en 5 da: %f", n2);

    /*Ya se mostraron algunos operadores, 
    ¿porqué la gente se equivoca al realizar 
    las operaciones básicas cuando hay operadores de mayor precedencia?
    Yo creo que principalmente por lo complejo y complicado que puede llegar a ser un codigo y tambien
    por la falta de experiencia*/

    return 0;
}