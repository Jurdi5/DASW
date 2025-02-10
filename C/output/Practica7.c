#include <stdio.h>


void sayHi(){
    printf("Hola mundo\n");
}

/*int EsPar(){
    int par;
    //par = (numero % 2 == 0) ? 0 : 1
    if (numero = )*/
int main(){
    float calif = 9.6;
    char letra;
    if (calif < 6){
    letra = 'C';
    } else {  
        if (calif > 8){
            letra = 'B';
        } else {
            letra = 'A';
        }
    }
    printf("Resultado = %c\n", letra);

    letra = (calif < 6) ? 'C' : 'X';
    letra = (calif < 8) ? 'B' : 'A';
    printf("Resultado2 = %c\n", letra);

    int numero = 12;

    int par = (numero % 2 == 0) ? 0 : 1;
    if (numero % 2 == 0) par = 0;
    else                par = 1;
    printf("El numero %d es impar =%d", numero, par);

    
    
    return 0;
}