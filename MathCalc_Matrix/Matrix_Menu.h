#ifndef MATRIX_MENU_H_INCLUDED
#define MATRIX_MENU_H_INCLUDED

#include"MathCalc_Matrix\Matrix_Addition.h"
#include"MathCalc_Matrix\Matrix_Determinant.h"
#include"MathCalc_Matrix\Matrix_Inverse.h"
#include"MathCalc_Matrix\Matrix_Multiplication.h"
#include"MathCalc_Matrix\Matrix_ScalarMultiplication.h"
#include"MathCalc_Matrix\Matrix_Subtraction.h"
#include"MathCalc_Matrix\Matrix_Transpose.h"

#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

int matrixMenu()
{
    int operation;
    char again = 'Y';

    while (again == 'Y')
    {

        printf("\nMatrix Operation Menu\n");
        printf("\n\nPlease type in the number associated to the operation you wish to perform.\n");
        printf("\t1- Addition\n");
        printf("\t2- Subtraction\n");
        printf("\t3- Scalar Multiplication\n");
        printf("\t4- Multiplication of two matrices\n");
        printf("\t5- Transpose\n");
        printf("\t6- Determinant\n");
        printf("\t7- Inverse\n");
        printf("Enter your choice: ");
        scanf(" %d", &operation);


        switch (operation){

        case 1: 
        
            addition();

            break;

        case 2:

            subtraction();
            break;

        case 3:

            scalarmultiplication();

            break;

        case 4:
            
            multiplication();

            break;

        case 5:
            
            transpose();

            break;

        case 6:
            
            determinant();

            break;

        case 7:
            
            inverse();

            break;

         case 8:
            
            //log();

            break;

        default:
            printf("\nIncorrect option! Please choose a number 1-8.");
            break;
        }

        printf("\n\nDo you want to calculate again? Y/N\n");
        scanf(" %c", &again);
        again = toupper(again);
    }
    printf("\n\nGoodbye!\n\n");

    return 0;
}

#endif
