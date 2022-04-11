#ifndef MATRIX_SCALAR_MULTIPLICATION_H_INCLUDED
#define MATRIX_SCALAR_MULTIPLICATION_INCLUDED
#include<stdio.h>

//User Defined Function Declaration
void readMatrix(int array[10][10], int rows, int colums);
void printMatrix(int array[10][10], int rows, int colums);
void matrixScalarMultiply(int array[10][10], int scalar, int rows, int colums);

//User Defined Function Definition
void readMatrix(int array[10][10], int rows, int colums){
    int i, j;
    for (i = 0; i < rows; i++){
        printf("\t%d entries for row %d: ", colums, i + 1);
        for (j = 0; j < colums; j++){
            scanf("%d", &array[i][j]);
        }
    }

    return;
}

void printMatrix(int array[10][10], int rows, int colums){
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < colums; j++){
            printf("\t%d", array[i][j]);
        }
        printf("\n");
    }
}


void matrixScalarMultiply(int array[10][10], int scalar, int rows, int colums){
    int i, j;
    int scaM[10][10];
    for (i = 0; i < rows; i++){
        for (j = 0; j < colums; j++){
            scaM[i][j] = scalar * array[i][j];
            printf("%d\t", scaM[i][j]);
        }
        printf("\n");
    }

}

#endif