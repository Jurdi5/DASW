#include <stdio.h>
#define ROWS 10
#define COLUMNS 10

int main(){
    int matrix[ROWS][COLUMNS];
    int r, c;
    
    for (r=0; r<ROWS; c++)
        for (c=0; c<COLUMNS; c++)
        printf("%d ", matrix[r][c]);
    printf("\n");

}