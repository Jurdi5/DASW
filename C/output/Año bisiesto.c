#include <stdio.h>

int esBisiesto(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int y;
    printf("Ingrese un ano: ");
    scanf("%d", &y);
    if (esBisiesto(y)) {
        printf("%d es un ano bisiesto.\n", y);
    } else {
        printf("%d no es un ano bisiesto.\n", y);
    }
    return 0;
}