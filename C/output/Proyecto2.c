#include <stdio.h>


    
void ordenar_de_variables(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void desplegar(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    char elemento;
    printf("Cuantos elementos son: ");
    scanf("%d", &n);
    char arr[n];
    getchar();
    for (int i = 0; i < n; i++) {
        printf("Cual es tu elemento: ");
        scanf("%c", &elemento);
        getchar();
        if ((elemento >= 65 && elemento <= 90) || (elemento >= 97 && elemento <= 122)) {
            arr[i] = elemento;
        } else {
            printf("El dato ingresado no es una letra valida, escribe otro\n");
            i--;
        }
    }

    
    ordenar_de_variables(arr, n);

    char mayusculas[n];
    char minusculas[n];
    int j = 0, k = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            mayusculas[j++] = arr[i];
        } else if (arr[i] >= 'a' && arr[i] <= 'z') {
            minusculas[k++] = arr[i];
        }
    }

    printf("Letras mayusculas ordenadas: ");
    desplegar(mayusculas, j);

    printf("Letras minusculas ordenadas: ");
    desplegar(minusculas, k);

    return 0;
}
