#include <stdio.h>

void Menu(){
    printf("[1] Peso a Dolar");
    printf("[2] Dolares a Pesos");
    printf("[3] Pesos a Euros");
    printf("[4] Euro a Pesos");
    printf("[0] Salir");
    }
void PesoDolar(){
    float peso;
    printf("Cuantos pesos tienes: ");
    scanf("%f", &peso);
     float Dolar = peso*.059;
}
int main(){
    Menu();
    int opcion;
    printf("Cual es tu opcion: ");
    scanf("%d",&opcion);
    setbuf(stdin, NULL);
    switch(opcion){
    case 1:
    case 2:
    case 3:
    case 4:
    case 0:
    }


    return 0;
}