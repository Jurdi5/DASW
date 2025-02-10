#include <stdio.h>
#include <stdbool.h>

int main(){
    float calif = 7.2;
    bool aprobado = calif >= 6;
    printf("Aprobado = %d\n", aprobado);
    aprobado = false;
    printf("Aprobado = %d\n", aprobado);
    short dados = 3;
    int gama = dados == 7 | dados == 11;
    printf("Gama = %d\n", gama);
    char letra = 'A';
    int minuscula = letra >= 'a' && letra <= 'z';
    printf("La letra %c = %d es minuscula? %d\n", letra, letra, minuscula);
    printf("La letra %c = %d, la letra %c = %d", 'a', 'a', 'z', 'z');
    char CM;
    printf("Teclee una letra para ver si es consonante mayuscula: ");
    scanf("%c", &CM);
    bool res = CM >= 65 && CM <= 90 && !(CM == 'A' || CM == 'E' || CM == 'I'|| CM == 'O'|| CM == 'U');
    printf("Res = %d", res);
    
    return 0;
}