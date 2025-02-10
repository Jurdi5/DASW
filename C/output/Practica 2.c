#include <stdio.h>

int main(){

    char c = 127;
    printf("char = %c, %d\n", c, c);
    c = c+1;
    printf("char = %c, %d\n", c, c);
    unsigned char uc = 128;
    printf("char = %c, %d\n",uc , uc);
    uc = 256;
    printf("char = %c, %d\n",uc ,uc);
    uc = 0xFF;
    printf("char = %c, %d\n",uc ,uc);
    int entero = 0xFFFFFFFF;
    printf("char = %d\n",entero ,entero);
    entero = 2147483647;
    printf("char = %d\n",entero ,entero);
    entero = entero + 1;
    printf("char = %d\n",entero);

    short s = 32768;
    printf("short = %d\n", s);
    float f1 = 1000.1;
    printf("float = %f\n", f1);

    return 0;
}