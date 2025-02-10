#include <stdio.h>

int main (){
    int x = 3, y;
    printf("x = %d, \t y=%d\n", x, y);
    y = 4*x;
    printf("x = %d, \t y=%d\n", x, y);

    int a=2, b=-3;
    int b1=-b;
    int b2=+b;
    printf("b1 = %d,\t b2=%d\n", b1, b2);
    int num = 7;
    int den = 2;
    int cociente, residuo;
    cociente = num / den;
    float resul = num /(float) den;
    residuo = (resul - cociente)*den;
    printf("7 = 2*3+1: %d = %d * %d + %d\n", num, den, cociente, residuo);

    residuo += 5;
    printf("residuo = %d\n", residuo);
    residuo ++;
    printf("residuo = %d\n", residuo);
    printf("residuo = %d\n", ++residuo);
    printf("residuo = %d\n", residuo);
    printf("%d, %d, %d, %d", residuo, residuo++, residuo, residuo++);
    printf("%d, %d\n", ++residuo, residuo--);
    



    return 0;
}