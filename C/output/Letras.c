#include <stdio.h>

void Letra(char c) {
    if (c >= 'A' && c <= 'Z') {
        printf("%c es una letra mayuscula\n", c);
    } else 
    if (c >= 'a' && c <= 'z') {
        printf("%c es una letra minuscula\n", c);
    } else {
        printf("%c no es una letra\n", c);
    }
}
int main (){
    char letra;
    printf("Cual es su letra: ");
    scanf("%c", &letra);
    Letra(letra);
    return 0;
}