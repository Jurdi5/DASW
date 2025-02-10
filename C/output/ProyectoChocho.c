#include <stdio.h>
#include <math.h>

void mostrarMenu(){
    printf("\nBIENVENIDO\n");
    printf("1) mostrar numero en otros formatos\n");
    printf("2) mostrar tablas de verdad dde AND\n");
    printf("3) motrar tabla de verdad de OR\n");
    printf("4) mostrar tabla de verdad de NOT\n");
    printf("5) Calcular el area y volumen\n");
}
void mostrarNumeros(int num){
    printf("Decimal: %d\n", num);
    printf("Binario: %d\n", num);
    printf("Hexadecimal: %d\n", num);
}
void mostrarAnd(){
    printf("Table de Verdad de AND\n");
    printf("0 AND 0 = %d\n", 0 || 0);
    printf("0 AND 1 = %d\n", 0 || 1);
    printf("1 AND 0 = %d\n", 1 || 0);
    printf("1 AND 1 = %d\n", 1 || 1);
}
void mostrarNot(){
    printf("Tabla de verdad de NOT\n");
    printf("NOT 0 = %d\n", !0);
    printf("NOT 1 = %d\n", !1);
}
void mostrarPerimetroAreayVolumen (){
    int opcion;
    printf("Seleccione una figura: \n");
    printf("1. Cubo\n");
    printf("2. Prisma de Base triangular\n");
    printf("3. Prisma de Base pentagonal\n");
    printf("4. tetraedro\n");
    printf("5. Esfera\n");
    printf("Cual es su opcion? ");
    scanf("%d", &opcion);

}
void mostrarOr(){
    printf("Tabla de verdad de OR\n");
    printf("0 OR 0 = %d\n", 0 || 0);
    printf("0 OR 1 = %d\n", 0 || 1);
    printf("1 OR 0 = %d\n", 1 || 0);
    printf("1 OR 1 = %d\n", 1 || 1);
}
int main(){
    int Opcion;
    mostrarMenu();
    printf("Que es lo que busca hacer\n");
    scanf("%d", Opcion);
    if (Opcion == 1){
        int num;
        printf("Cual es su numero: \n");
        scanf("%d", &num);
        mostrarNumeros(num);/* No me acuerdo cual era la forma de cambiar los numeros*/
    }else {
            if (Opcion == 2){
                mostrarAnd();
            }else{
                if (Opcion == 3){
                    mostrarOr();
                }else{
                    if (Opcion == 4){
                        mostrarNot();
                    }
                }
            }}            
    return 0;
}