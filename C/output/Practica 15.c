#include <stdio.h>

int main(void) {
  printf("Hola\n");
  printf("Max = %d", max(3, 4));
  
  return 0;
}

int main (){
    int a, b, c;
    printf("Dime la a: ");
    scanf("%d", &a);
    setbuf(stdin, NULL);
    printf("Dime la b: ");
    scanf("%d", &b);
    setbuf(stdin, NULL);
    printf("Dime la c: ");
    scanf("%d", &c);
    setbuf(stdin, NULL);
    printf("A = %d, B = %d", a, b);
    printf("El maximo es: %d", max(a,b));

    return 0;
}