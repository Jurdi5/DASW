#include <stdio.h>

int registro = 0x4000850089;

union Registro {
    int valor_completo;
    struct {
        unsigned int bit0: 1;
        unsigned int bit1: 1;
        unsigned int bit2: 1;
        unsigned int bit38: 1;
    } bits;
};

union Registro registro_union;

void leer_registro_completo() {
    printf("Valor del registro completo: %x\n", registro_union.valor_completo);
}

void leer_bit_38() {
    printf("Valor del bit 38: %d\n", registro_union.bits.bit38);
}

void cambiar_bit_38() {
    registro_union.bits.bit38 = !registro_union.bits.bit38;
    printf("Bit 38 cambiado a: %d\n", registro_union.bits.bit38);
}

void cambiar_bit_particular() {
    int bit;
    printf("Ingrese el numero de bit que desea cambiar (0-38): ");
    scanf("%d", &bit);
    registro_union.bits.bit[bit] = !registro_union.bits.bit[bit];
    printf("Bit %d cambiado a: %d\n", bit, registro_union.bits.bit[bit]);
}

void resetear_registro() {
    registro_union.valor_completo = 0x850089;
    printf("Registro reseteado a: %x\n", registro_union.valor_completo);
}

int main() {
    registro_union.valor_completo = registro;

    int opcion;
    do {
        printf("\nElija una opcion:\n");
        printf("1. Leer registro completo\n");
        printf("2. Leer solo el bit 38\n");
        printf("3. Cambiar el bit 38\n");
        printf("4. Cambiar otro bit en particular\n");
        printf("5. Resetear registro a 0x850089\n");
        printf("6. Salir\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                leer_registro_completo();
                break;
            case 2:
                leer_bit_38();
                break;
            case 3:
                cambiar_bit_38();
                break;
            case 4:
                cambiar_bit_particular();
                break;
            case 5:
                resetear_registro();
                break;
            case 6:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion invalida. Intente nuevamente.\n");
        }
    } while (opcion != 6);

    return 0;
}