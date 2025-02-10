#include <stdio.h>
/*
int main(){
    int edad;
    printf("%d\n", edad);
    int res;
    printf("Dime tu edad: ");
    res = scanf("%d", &edad);
    setbuf(stdin, NULL);
    while ( res!=1){
        printf("Dime tu edad: ");
        res = scanf("%d",&edad);
        setbuf(stdin, NULL);
    }
    printf("Tu edad = %d, (%d)\n", edad, res);


    return 0;
}
*/
int main(){
    int edad;
    printf("%d\n", edad);
    int res;
    do{
        printf("Dime tu edad [0-100] ");
         res = scanf("%d", &edad);
         setbuf(stdin, NULL);
    } while ( res!=1 || edad<0 || edad > 100);
    printf("Tu edad = %d, (%d)\n", edad, res);

    int mayor = 0;
    int numero = 0;
    printf("Es ecriba un numero");
    res = scanf("%d", &numero);
    setbuf(stdin, NULL);
    while (numero >= 0){
        if (numero > mayor){
            print("%d es el numero mayor\n", numero);
            mayor = numero;

        } else
        if (mayor>numero){
            printf("%d es mayor\n", mayor);

        }else
        printf("Es igual al mayor\n");
        printf("escriba el numero");
        res = scanf("%d", &numero);
        setbuf(stdin, NULL);
    }

    


    return 0;
}