#include<stdio.h>
#include<stdlib.h>
//#include"MathCalc_Ar_Vol\Ar_Vol_Cone.h"

#include"MathCalc_Matrix\matrixMultiplication.h"

int main(void){

    int i, j, k; //used in for loops

    int matrixA[10][10]; // initialized at 10 just to have it initialized
    int matrixB[10][10];
    int rowA, colA;
    int rowB, colB;

            //when mulptiplying arrays matrixA colum # has to equal matrixB row #
            printf("\nEnter the #rows and #cols for matrix A: ");
            scanf("%d%d", &rowA, &colA);

            printf("Enter the #rows and #cols for matrix B: ");
            scanf("%d%d", &rowB, &colB);

            // Column of first matrix should be equal to column of second matrix and
            while (colA != rowB)
            {
                printf("\n\nError! column of first matrix not equal to row of second.\n\n");
                printf("\nEnter the #rows and #cols for matrix A: ");
                scanf("%d%d", &rowA, &colA);

                printf("Enter the #rows and #cols for matrix B: ");
                scanf("%d%d", &rowB, &colB);
            }

            // Storing elements of first matrix.
            printf("\n\tEnter elements of Matrix A a %d x %d matrix.\n", rowA, colA); // with the %d we remember the user the dimentions of the array
            readMatrix(matrixA, rowA, colA);
            printf("\n\t\tMatrix A\n\n");
            printMatrix(matrixA, rowA, colA);

            // Storing elements of second matrix.
            printf("\n\tEnter elements of Matrix B a %d x %d matrix.\n", rowB, colB); // with the %d we remember the user the dimentions of the array
            readMatrix(matrixB, rowB, colB);
            printf("\n\t\tMatrix A\n\n");
            printMatrix(matrixB, rowB, colB);

            //multiplying arrays
            matrixMultiply(matrixA, matrixB, rowA, colA, colB);

    return 0;
}