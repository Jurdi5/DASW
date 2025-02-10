#include <stdio.h>
#include <math.h>
#include <stdbool.h>
double PI = 3.1416;

//Options
void mostrarMenu() {
    printf("\nBIENVENIDO\n");
    printf("1) mostrar numero en otros formatos\n");
    printf("2) mostrar tablas de verdad dde AND\n");
    printf("3) motrar tabla de verdad de OR\n");
    printf("4) mostrar tabla de verdad de NOT\n");
    printf("5) Calcular el area y volumen\n");
}									//Option1
void mostrarNumeros(int num) {
    printf("Decimal: %d\n", num);
    printf("Binario: %d\n", num);
    printf("Hexadecimal: %d\n", num);
}									//Option2
void mostrarAnd() {
    printf("Table de Verdad de AND\n");
    printf("0 AND 0 = %d\n", 0 || 0);
    printf("0 AND 1 = %d\n", 0 || 1);
    printf("1 AND 0 = %d\n", 1 || 0);
    printf("1 AND 1 = %d\n", 1 || 1);
}									//Option3
void mostrarOr() {
    printf("Tabla de verdad de OR\n");
    printf("0 OR 0 = %d\n", 0 || 0);
    printf("0 OR 1 = %d\n", 0 || 1);
    printf("1 OR 0 = %d\n", 1 || 0);
    printf("1 OR 1 = %d\n", 1 || 1);
}									//Option4

void mostrarNot() {
    printf("Tabla de verdad de NOT\n");
    printf("NOT 0 = %d\n", !0);
    printf("NOT 1 = %d\n", !1);
}


void geometria() {
    int op;
    float lado, altura, radio, base, apotema;

    printf("1. Cubo\n2. Prisma de base triangular\n3. Prisma de base con pent�gono\n4. Tetraedro\n5. Esfera\n");
    printf("Ingresa el numero de la figura correspondiente: ");
    scanf_s("%d", &op);

    if (op == 1) {
        printf("Ingresa la longitud del lado del cubo: ");
        scanf_s("%f", &lado);
        printf("Area: %.2f\n", 6 * lado * lado);
        printf("Perimetro: %.2f\n", 12 * lado);
        printf("Volumen: %.2f\n", lado * lado * lado);
    }
    else if (op == 2) {
        printf("Ingresa la longitud del prisma triangular: ");
        scanf_s("%f", &base);
        printf("Ingresa la longitud del prisma triangular: ");
        scanf_s("%f", &altura);
        printf("Area: %.2f\n", base * altura);
        printf("Perimetro: %.2f\n", 3 * base);
        printf("Volumen: %.2f\n", 0.5 * base * base * altura);
    }
    else if (op == 3) {
        printf("Ingresa la longitud del prisma pentagonal: ");
        scanf_s("%f", &lado);
        printf("Ingresa el apotema del prisma pentagonal: ");
        scanf_s("%f", &apotema);
        printf("Ingresa la altura del prisma pentagonal : ");
        scanf_s("%f", &altura);
        printf("Area: %.2f\n", 5 * lado * apotema);
        printf("Perimetro: %.2f\n", 5 * lado);
        printf("Volumen: %.2f\n", 0.5 * 5 * lado * apotema * altura);
    }
    else if (op == 4) {
        printf("Ingresa la longitud del tetraedro: ");
        scanf_s("%f", &lado);
        printf("Area: %.2f\n", sqrt(3) * lado * lado);
        printf("Perimetro: %.2f\n", 6 * lado);
        printf("Volumen: %.2f\n", lado * lado * lado / (6 * sqrt(2)));
    }
    else if (op == 5) {
        printf("Ingresa el radio de la esfera: ");
        scanf_s("%f", &radio);
        printf("Area: %.2f\n", 4 * PI * radio * radio);
        printf("Volumen: %.2f\n", 4.0 / 3.0 * PI * radio * radio * radio);
    }
    else {
        printf("Opcion Invalida...\n");
    }
}


//Subcategory 1: Decimal, Hexadecimal and binary
    //
void PBR(int dec, int bit) {
    if (bit >= 0) {
        printf("%d", (dec >> bit) & 1);
        PBR(dec, bit - 1);
    }
}
    void decimal(int dec) {
        printf("Decimal: %d\n", dec);
        printf("Binary:");
        PBR(dec, 31);
        printf("Hexadecimal: %X\n", dec);
    }

    //Subcategory 2: Trigonometry

    int main() {


        int Opcion;
        mostrarMenu();
        printf("\n Seleccione una opcion: \n");
        scanf_s("%d", &Opcion);


        if (Opcion == 1) {
            int num;
            printf("Inserte un numero: \n");
            scanf_s("%d", &num);
            printf("Tu numero fue: %d", num);
            decimal(num);










        }
        else {
            if (Opcion == 2) {
                mostrarAnd();

            }
            else {
                if (Opcion == 3) {
                    mostrarOr();
                }
                else {
                    if (Opcion == 4) {
                        mostrarNot();
                    }
                    else {
                        if (Opcion == 5)
                            geometria();


                    }
                }
            }
        }
        return 0;
    }