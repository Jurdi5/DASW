#include <stdio.h>

int main(){
    char b1 = 0xCA;
    printf("Valor = %d\n", b1);
    b1 = 0b11001010;
    printf("Valor = %d\n", b1);
    char b2 = ~b1;
    printf("Valor = %d\n", b2);
    b2 = ~~b1;
    printf("Valor = %d\n", b2);
    b2 = 1;
    b2 = ~b2;
    printf("Valor = %d\n", b2);
    unsigned char c1 = 0b11001010;
    unsigned char c2 = 0b11000101;
    unsigned char c3 = c1 & c2;
    printf("Valor = %d\n", c3);
    c1 = 0b11111111;
    c2 = 0b11111111;
    c3 = c1 & c2;
    printf("Valor = %d\n", c3);
    c2= 0b00000000;
    c3 = c1 & c2;
    printf("Valor = %d\n", c3);
    c1 = 255;
    c2 = 128;
    c3 = c1 & c2;
    printf("Valor FF AND 80 = %D\n",c3);
    c1 = 0b00000001; // 1
    c2 = 0b10000000; // 128
    c3 = c1 | c2;
    printf("Valor 01  OR 80 = %d\n", c3);
    c3 = c1 ^ c2;
    printf("Valor 01 XOR 80 = %D\n", c3);
    c1 = 0b11111111;
    printf("Valor c1 = %d\n", c1);
    c3 = c1 >> 1;
    printf("Valor c1 >>1 = %d\n", c3);


    return 0;

}