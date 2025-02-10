#include <stdio.h>
#include <stdlib.h>

void multiplicarMatrices(int m, int n, int p, float **a, float **b, float **c) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < p; j++) {
      c[i][j] = 0;
      for (int k = 0; k < n; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
}

void imprimirMatriz(int m, int n, float **a) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%f ", a[i][j]);
    }
    printf("\n");
  }
}

void multiplicarVectorMatriz(int m, int n, float *a, float **b, float *c) {
  for (int i = 0; i < m; i++) {
    c[i] = 0;
    for (int j = 0; j < n; j++) {
      c[i] += a[j] * b[j][i];
    }
  }
}

int main() {
  int m, n, p;
  printf("Ingrese el numero de filas de la matriz A: ");
  scanf("%d", &m);
  printf("Ingrese el numero de columnas de la matriz A: ");
  scanf("%d", &n);
  printf("Ingrese el numero de columnas de la matriz B: ");
  scanf("%d", &p);

  float **a = (float **)malloc(m * sizeof(float *));
  for (int i = 0; i < m; i++) {
    a[i] = (float *)malloc(n * sizeof(float));
  }
  float **b = (float **)malloc(n * sizeof(float *));
  for (int i = 0; i < n; i++) {
    b[i] = (float *)malloc(p * sizeof(float));
  }
  float **c = (float **)malloc(m * sizeof(float *));
  for (int i = 0; i < m; i++) {
    c[i] = (float *)malloc(p * sizeof(float));
  }

  printf("Ingrese los elementos de la matriz A:\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%f", &a[i][j]);
    }
  }
  printf("Ingrese los elementos de la matriz B:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < p; j++) {
      scanf("%f", &b[i][j]);
    }
  }

  printf("Matriz A:\n");
  imprimirMatriz(m, n, a);
  printf("Matriz B:\n");
  imprimirMatriz(n, p, b);

  multiplicarMatrices(m, n, p, a, b, c);

  printf("Resultado de la multiplicacion de matrices:\n");
  imprimirMatriz(m, p, c);

  int v;
  printf("Ingrese el numero de elementos del vector: ");
  scanf("%d", &v);
  float *x = (float *)malloc(v * sizeof(float));
  printf("Ingrese los elementos del vector:\n");
  for (int i = 0; i < v; i++) {
    scanf("%f", &x[i]);
  }
  float *y = (float *)malloc(m * sizeof(float));
  multiplicarVectorMatriz(m, n, x, b, y);

  printf("Resultado de la multiplicacion del vector por la matriz:\n");
}