#include <stdio.h>
#include <math.h>

int main (){
    /*
    unsigned char uc = 0xA0;
    printf("char = <%c>, %d\n", uc, uc);
    char c = uc;
    printf("char = <%c>, %d\n", c, c);
    printf("%c\n", 65);
    float f1 = 1000.1;
    printf("%f vs %X\n", f1, f1);
    
    float f2;
    int edad;
    int jugos = 0;
    int resultado;
    printf("Escribe tu edad: ");
    scanf("%d", &edad);
    printf("Tu edad es: %d", edad);
    printf("Cuanto traes para las copias: ");
    resultado = scanf("%f", &f2);
    printf("Traes %.2f pesos, no te alcanza, Error=%d\n", f2, resultado);
    printf("Cuant traes para los jugos: ");
    resultado = scanf("%d", &jugos);
    printf("Traes %d para jugos. Resul? = %d \n", jugos, resultado);    
    */
   float a,b,c;
   char letra;
   char buffer[256];
   int resultado;

   printf("Escribe dos lados de un triangulo rectangulo: ");
   fgets(buffer, 256, stdin);
   sscanf(buffer, "%f %f", &a, &b);
   scanf("%f %f", &a, &b);
   c = sqrt(pow(a,2) + pow(b,2));
   printf("c= %f", c);
   printf("Teclea una letra: ");
   fgets(buffer, 256, stdin);
   resultado = scanf(buffer, "%c", &letra);
   printf("letra = %c, %d. E%d\n", letra, letra, resultado);

    return 0;
}