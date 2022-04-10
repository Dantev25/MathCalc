#ifndef MATRIX_ADDITION_H_INCLUDED
#define MATRIX_ADDITION_H_INCLUDED
#include<math.h>

void matrixAddSub(int arrayone[10][10], int arraytwo[10][10], int rows, int colums, int mul){
    int i, j;
    int sumM[10][10];
    int scaM[10][10];
    FILE *fptr;
    for (i = 0; i < rows; i++){
        for (j = 0; j < colums; j++){
            scaM[i][j] = mul * arraytwo[i][j];
            }
        }


    for (i = 0; i < rows; i++){
        for (j = 0; j < colums; j++){
            sumM[i][j] = arrayone[i][j] + scaM[i][j];
            printf("\t%d", sumM[i][j]);
        }
        printf("\n");
    }

    fptr = (fopen("SE_MATRIX/matrix_Log.txt","w"));
    
    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"Matrix Operation = Addition\n");
    fprintf("\nOutput Matrix:\n\n");

      for (i = 0; i < rows; i++){
        for (j = 0; j < colums; j++){
            scaM[i][j] = mul * arraytwo[i][j];
            }
        }


    for (i = 0; i < rows; i++){
        for (j = 0; j < colums; j++){
            sumM[i][j] = arrayone[i][j] + scaM[i][j];
            fprintf("\t%d", sumM[i][j]);
        }
        fprintf("\n");
    }
}
#endif