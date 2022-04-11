#ifndef MATRIX_TRANSPOSE_H_INCLUDED
#define MATRIX_TRANSPOSE_H_INCLUDED


#include <stdio.h>
void trans(int a,int b,int m[10][10])

{

    int i,j;
    printf("After transpose\n");
    for(j=1;j<=b;j++)   
    {
        for(i=1;i<=a;i++)
        {
            printf("\t%d",m[i][j]);
        }
        printf("\n");
    }

}


#endif