#include<stdio.h>
#include<stdlib.h>
#include"MathCalc_Matrix\matrixAddition.h"

int main(void){

     int i, j, k; //used in for loops

    int matrixA[10][10]; // initialized at 10 just to have it initialized
    int matrixB[10][10];
    int rowA, colA;
    int rowB, colB;
    int add = 1;

            printf("\nEnter the #rows and #cols for matrix A: ");
            scanf("%d%d", &rowA, &colA);

            printf("Enter the #rows and #cols for matrix B: ");
            scanf("%d%d", &rowB, &colB);

            while ((rowA != rowB) && (colA != colB)){
                printf("\nMatrices must be the same size\n");
                printf("\nEnter the #rows and #cols for matrix A: ");
                scanf("%d%d", &rowA, &colA);

                printf("Enter the #rows and #cols for matrix B: ");
                scanf("%d%d", &rowB, &colB);

            }

            printf("\n\tEnter elements of Matrix A a %d x %d matrix.\n", rowA, colA); // with the %d we remember the user the dimentions of the array
            readMatrix(matrixA, rowA, colA);
            printf("\n\t\tMatrix A\n\n");
            printMatrix(matrixA, rowA, colA);


            printf("\n\tEnter elements of Matrix B a %d x %d matrix.\n", rowB, colB); // with the %d we remember the user the dimentions of the array
            readMatrix(matrixB, rowB, colB);
            printf("\n\t\tMatrix B\n\n");
            printMatrix(matrixB, rowB, colB);


            printf("\nThe Sum of matrixA + matrixB is : \n");
            matrixAdd(matrixA, matrixB, rowA, colA, add);

    return 0;
}