#ifndef MATRIX_MULTIPLICATION_H_INCLUDED
#define MATRIX_MULTIPLICATION_H_INCLUDED
#include<math.h>


void matrixMultiply(int arrayone[10][10], int arraytwo[10][10], int rowsA, int columsA,int columsB){
    int i, j, k;
    int mulM[10][10];
    FILE *fptr;

    // Initializing all elements of result matrix to 0
    for (i = 0; i<rowsA; ++i)
        for (j = 0; j<columsB; ++j)
        {
            mulM[i][j] = 0;
        }

    // Multiplying matrices a and b and
    // storing result in result matrix
    for (i = 0; i<rowsA; ++i)
        for (j = 0; j<columsB; ++j)
            for (k = 0; k<columsA; ++k)
            {
                mulM[i][j] += arrayone[i][k] * arraytwo[k][j];
            }
    printf("\nOutput Matrix:\n");
    for (i = 0; i<rowsA; ++i)
        for (j = 0; j<columsB; ++j)
        {
            printf("\t%d ", mulM[i][j]);
            if (j == columsB - 1)
                printf("\n\n");
        }

        
    fptr = (fopen("SE_MATRIX/matrix_Log.txt","w"));
    
    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"Matrix Operation = Multiplication\n");
    fprintf("\nOutput Matrix:\n");
    for (i = 0; i<rowsA; ++i)
        for (j = 0; j<columsB; ++j)
        {
            fprintf("\t%d ", mulM[i][j]);
            if (j == columsB - 1)
                fprintf("\n\n");
        }


    fclose(fptr);
}

#endif