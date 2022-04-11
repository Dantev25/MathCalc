#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#include"MathCalc_Matrix\matrixTranspose.h"

    int main()
{
    int i,j,a,b,m[10][10];
    
    printf("Enter the rows and columns of matrix: ");
    scanf("%d%d",&a,&b);
    printf("Enter the elements\n");
    
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            printf("Enter m[%d][%d] : ",i,j);
            scanf("%d",&m[i][j]);
        }
    }

    printf("\n Before transpose\n");

    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
        printf("\t%d",m[i][j]);
        }

        printf("\n");

    }
    trans(a,b,m);
    getch();

}