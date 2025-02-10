#include <stdio.h>

void adivinarNumero() {
    int numeroPensado;
    printf("Piensa en un numero del 1 al 100.\n");
    printf("Presiona enter cuando estes listo para empezar a adivinar.\n");
    while (getchar() != '\n'); 

    printf("Bien, empecemos.\n");
    
    int limiteSuperior = 100;
    int limiteInferior = 1;
    int intento = (limiteSuperior + limiteInferior) / 2;

    printf("¿Es tu numero %d? (si es asi, ingresa 1; si tu numero es mayor, ingresa 2; si tu numero es menor, ingresa 3): ", intento);
    scanf("%d", &numeroPensado);

    while (intento != 97) {
        if (numeroPensado == 2) {
            limiteInferior = intento + 1;
        } else if (numeroPensado == 3) {
            limiteSuperior = intento - 1;
        }
        intento = (limiteSuperior + limiteInferior) / 2;
        printf("¿Es tu numero %d? (si es asi, ingresa 1; si tu numero es mayor, ingresa 2; si tu numero es menor, ingresa 3): ", intento);
        scanf("%d", &numeroPensado);
    }
    printf("¡Adivine tu numero! Tu numero es %d.\n", intento);
}

int main() {
    adivinarNumero();
    return 0;
}