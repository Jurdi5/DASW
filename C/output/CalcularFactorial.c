#include <stdio.h>

void factoriales(int num){
    int n = 1;
    int f = 1;
    do {
        f *= n;
        n++;
    }while(n <= num);
    printf("El factorial de %d es: %d\n", num, f);
}
int main(){
    int num;
    printf("Cual es tu numero factorial: ");
    scanf("%d", &num);  
    factoriales(num);

}
/*¿Qué es más adecuado, un ciclo while o un ciclo do-while?
depende de la necesidad y el gusto de la persona
¿Qué alternativas hay al ciclo while?
for y do-while*/