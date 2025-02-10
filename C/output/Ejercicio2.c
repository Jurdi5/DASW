#include <stdio.h>
#include <stdbool.h>
int main(){
    /*int EdadA;
    printf("Cual es la edad de la primera persona: ");
    scanf("%d", EdadA);
    int EdadB;
    printf("Cual es la edad de la primera persona: ");
    scanf("%d", EdadB);*/
    float C1 = 8.8;
    float C2 = 6.7;
    float C3 = 9.3;
    if (C1 > C2 && C1 > C3)
        printf("C1 = %f es mayor", C1);
    else
        if (C2 >= C1 && C2 >= C3)
            printf("c2 =%f es mayor", C2);
        else
            printf("C3 = %f es mayor", C3);

    return 0;
}