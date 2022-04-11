#include<stdio.h>
#include<stdlib.h>
#include"MathCalc_Matrix\matrixScalarMultiplication.h"


int main(){

    int i, j, k; //used in for loops

    int matrixA[10][10]; // initialized at 10 just to have it initialized
    int matrixB[10][10];
    int rowA, colA;
    int rowB, colB;
    int scalar = 0;



            printf("\nEnter the scalar: ");
            scanf("%d", &scalar);
            printf("\nThe scalar is: %d ", scalar);


            printf("\nEnter the #rows and #cols for matrix A: ");
            scanf("%d%d", &rowA, &colA);

            printf("\n\tEnter elements of Matrix A a %d x %d matrix.\n", rowA, colA); // with the %d we remember the user the dimentions of the array
            readMatrix(matrixA, rowA, colA);
            printf("\n\t\tMatrix A\n\n");
            printMatrix(matrixA, rowA, colA);

            printf("\nThe scalar multiplication between matrixA * %d is: \n", scalar);
            matrixScalarMultiply(matrixA, scalar, rowA, colA);


    return 0;
}