#include <stdio.h>
#define PI 3.1416
#define ENTER printf("\n")
#define GUIONES for (int i = 0; i < 3; i++) printf("-----"); \
    ENTER;
#define Dollars(pesos) pesos * 0.053 
#define Sumar(a, b, c) ((a) + (b) + (c) )
#define Celsius(a) (a-32)*5/9
#define Max(a, b) (a>=b?a:b)


int main(){
#ifdef TABLAS
    for (int i=1; i<=5 ; i++){
        for (int j=1; j<=10 ; j++)
            printf("%d x %d = %d\n", i, j, i * j);
        printf("\n");
    }
#endif

#ifdef INVERSION
    float montoinicial = 0;
    int duracion = 0;
    float tasa = 8.0;
    float acumulado = 0;
    printf("Monto a invertir: ");
    scanf("%f", &montoinicial);
    setbuf(stdin, NULL);
    printf("Duracion de la inversion: ");
    scanf("%d", &duracion);
    setbuf(stdin, NULL);
    //tasas = 8, 8.5, 9, 9.5, 10
    for (int i=1; i<=5; i++){
        printf("Tasa = %.2f\n", tasa);
        acumulado = montoinicial;
        for (int j = 1; j <= duracion; j++){
            acumulado *= 1+tasa/100;
            printf("Anio %d, monto = %.2f\n", j, acumulado);
        }
        tasa += 0.5;
        ENTER;
    }
#endif
    GUIONES;
    int i = 80;
    float radio = 3;
    float area = PI * radio * radio;
    printf("Area %f", area);
    ENTER;

#ifdef GPU
    printf("Variante del programa que usa el GPU\n");
#endif

#ifndef GPU
    printf("Variante del programa que no usa el GPU\n");
#endif

    float pesos;
    printf("Dime los pasos a convertir: ");
    scanf("%f", &pesos);
    setbuf(stdin, NULL);
    printf("El total es = %.2f\n", Dollars(pesos));

    int s = 3 * Sumar(10, 20, 40 - 10);
    printf("s = %d\n", s);

    float farenheit;
    int ifarenheit;
    printf("Dime la temperatura en Farenheit: ");
    scanf("%f", &farenheit);
    setbuf(stdin, NULL);
    printf("La temperatura en Celsius es %.2f\n", Celsius(farenheit));
    printf("Comparativa = %.2f\n", Max(Celsius(86.7), 29.64));
#ifdef WINDOWS
    system("PAUSE");
#endif


    return 0;
}