#include <stdio.h>
#include <stdbool.h>

int main (){
    int Dia;
    int Mes;
    printf("Cual es tu dia de nacimiento: ");
    scanf("%d", &Dia);
    printf("Cual es tu numero de mes de nacimiento: ");
    scanf("%d", &Mes);
    if ((Dia >= 22 && Dia <= 31 && Mes == 12) || (Dia <= 20 && Dia >= 1 && Mes == 1)){
        printf("Eres Capricornio");
    } else 
        if ((Dia <= 31 && Dia >= 21 && Mes == 1) || (Dia <= 19 && Dia >= 1 && Mes == 2)){
            printf("Eres Acuario");
        } else 
            if ((Dia <= 28 && Dia >= 20 && Mes == 2) || (Dia <= 20 && Dia >= 1 && Mes == 3)){
            printf("Eres Piscis");
        } else 
            if ((Dia <= 31 && Dia >= 21 && Mes == 3) || (Dia <= 20 && Dia >= 1 && Mes == 4)){
            printf("Eres Aries");
        } else 
            if ((Dia <= 30 && Dia >= 21 && Mes == 4) || (Dia <= 20 && Dia >= 1 && Mes == 5)){
            printf("Eres Tauro");
        } else
        if ((Dia <= 31 && Dia >= 21 && Mes == 5) || (Dia <= 20 && Dia >= 1 && Mes == 6)){
            printf("Eres Geminis");
        } else
        if ((Dia <= 30 && Dia >= 21 && Mes == 6) || (Dia <= 20 && Dia >= 1 && Mes == 7)){
            printf("Eres Cancer");
        } else
        if ((Dia <= 31 && Dia >= 21 && Mes == 7) || (Dia <= 21 && Dia >= 1 && Mes == 8)){
            printf("Eres Leo");
        } else
        if ((Dia <= 31 && Dia >= 22 && Mes == 8) || (Dia <= 20 && Dia >= 1 && Mes == 9)){
            printf("Eres Virgo");
        } else
        if ((Dia <= 30 && Dia >= 21 && Mes == 9) || (Dia <= 20 && Dia >= 1 && Mes == 10)){
            printf("Eres Libra");
        } else
        if ((Dia <= 31 && Dia >= 21 && Mes == 10) || (Dia <= 21 && Dia >= 1 && Mes == 11)){
            printf("Eres Escorpio");
        } else
        if ((Dia <= 30 && Dia >= 22 && Mes == 11) || (Dia <= 21 && Dia >= 1 && Mes == 12)){
            printf("Eres Sagitario");
        }

    return 0;
}