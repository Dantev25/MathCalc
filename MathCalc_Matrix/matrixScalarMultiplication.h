#ifndef MATRIX_SCALAR_MULTIPLICATION_H_INCLUDED
#define MATRIX_SCALAR_MULTIPLICATION_INCLUDED
#include<stdio.h>
#include<math.h>

void matrixScalarMultiply(int array[10][10], int scalar, int rows, int colums){
    int i, j;
    int scaM[10][10];
    FILE *fptr;
    fptr = (fopen("SE_MATRIX/matrixLog.txt","w"));
    
    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"Matrix Operation = Scalar Multiplication\n");
    fprintf(fptr,"\nOutput Matrix:\n");

    for (i = 0; i < rows; i++){
        for (j = 0; j < colums; j++){
            scaM[i][j] = scalar * array[i][j];
            printf("%d\t", scaM[i][j]);
            fprintf(fptr, "%d\t", scaM[i][j]);
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
    fclose(fptr);

}
#endif