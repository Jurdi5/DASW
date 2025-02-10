#include <stdio.h>
#include <math.h>

void mostrarNumeros(int num1, int num2) {
    printf("Decimal: %d\n", num1);
    printf("Binario: %s\n", convertirABinario(num1));
    printf("Hexadecimal: %X\n", num1);
}
void convertirBinario(int num){
    
}
void mostrarAnd(int a, int b) {
    printf("Tabla de verdad para AND\n");
    printf("a | b | a AND b\n");
    printf("- - - - - - -\n");
    printf("0 | 0 | %d\n", a && b);
    printf("0 | 1 | %d\n", a && b);
    printf("1 | 0 | %d\n", a && b);
    printf("1 | 1 | %d\n", a && b);
}

void mostrarOr(int a, int b) {
    printf("Tabla de verdad para OR\n");
    printf("a | b | a OR b\n");
    printf("- - - - - - -\n");
    printf("0 | 0 | %d\n", a || b);
    printf("0 | 1 | %d\n", a || b);
    printf("1 | 0 | %d\n", a || b);
    printf("1 | 1 | %d\n", a || b);
}

void mostrarNot(int a) {
    printf("Tabla de verdad para NOT\n");
    printf("a | NOT a\n");
    printf("- - -\n");
    printf("0 | %d\n", !a);
    printf("1 | %d\n", !a);
}

float calcularPerimetroTriangulo(float lado1, float lado2, float lado3) {
    return lado1 + lado2 + lado3;
}

float calcularAreaTriangulo(float lado1, float lado2, float lado3) {
    float s = (lado1 + lado2 + lado3) / 2;
    return sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
}

float calcularVolumenCubo(float lado) {
    return lado * lado * lado;
}

int main() {
    int opcion;
    int a, b;
    float lado1, lado2, lado3;

    printf("BIENVENIDO AL PROGRAMA\n");
    printf("1) Mostrar número en otros formatos (Decimal, Binario y Hexadecimal)\n");
    printf("2) Mostrar tabla de verdad de AND\n");
    printf("3) Mostrar tabla de verdad de OR\n");
    printf("4) Mostrar tabla de verdad de NOT\n");
    printf("5) Calcular el perímetro, área y volumen\n");

    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    if (opcion == 1) {
        printf("Ingrese un número entero: ");
        scanf("%d", &a);
        mostrarNumeros(a, a);
    } else if (opcion == 2) {
        printf("Ingrese dos valores (0 o 1) separados por un espacio: ");
        scanf("%d %d", &a, &b);
        mostrarAnd(a, b);
    } else if (opcion == 3) {
        printf("Ingrese dos valores (0 o 1) separados por un espacio: ");
        scanf("%d %d", &a, &b);
        mostrarOr(a, b);
    } else if (opcion == 4) {
        printf("Ingrese un valor (0 o 1): ");
        scanf("%d", &a);
        mostrarNot(a);
    } else if (opcion == 5) {
        int opcionFigura;
        printf("Seleccione una figura para calcular su perímetro, área y volumen:\n");
        printf("1. Cubo\n");
        printf("2. Prisma de base triangular\n");
        printf("3. Prisma de base con pentágono\n");
        printf("4. Tetraedro\n");
        printf("5. Esfera\n");
        scanf("%d", &opcionFigura);

        if (opcionFigura == 1) {
            printf("Ingrese el valor del lado del cubo: ");
            scanf("%f", &lado1);
            printf("Perímetro: %f\n", calcularPerimetroTriangulo(lado1, lado1, lado1));
            printf("Área: %f\n", lado1 * lado1);
            printf("Volumen: %f\n", calcularVolumenCubo(lado1));
        } else if (opcionFigura == 2) {
            printf("Ingrese los valores de los lados del triángulo: ");
            scanf("%f %f %f", &lado1, &lado2, &lado3);
            printf("Perímetro: %f\n", calcularPerimetroTriangulo(lado1, lado2, lado3));
            printf("Área: %f\n", calcularAreaTriangulo(lado1, lado2, lado3));
        }
        // Otros casos para otras figuras
    } else {
        printf("Opción no válida\n");
    }

    return 0;
}