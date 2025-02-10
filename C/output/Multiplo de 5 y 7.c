#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    float num;
    printf("cual es tu numero: ");
    scanf("%f", &num);
    if (fmod(num,5) == 0 && fmod(num,7) == 0){
        printf("Tu numero es divisible entre 5 y 7");
        
    } else {
        if (fmod(num,5) == 0){
            printf("Tu numero solo es divisible entre 5");

        } else {
            if (fmod(num,7)==0 ){
                printf("Tu numero solo es divisible entre 7");

            } else {
                printf("Tu numero no es divisible entre 5 ni entre 7");
            }

            
        }
    }

    return 0;
}