#ifndef MATRIX_MENU_H_INCLUDED
#define MATRIX_MENU_H_INCLUDED

#include"Matrix_Addition.h"
#include"Matrix_Determinant.h"
#include"Matrix_Inverse.h"
#include"Matrix_Multiplication.h"
#include"Matrix_ScalarMultiplication.h"
#include"Matrix_Subtraction.h"
#include"Matrix_Transpose.h"



int MatrixMenu()
{
    int operation;
    char again = 'Y';

    while (again == 'Y')
    {

        printf("\n\t\tWelcome to the Matrix Operation Menu\n");
        printf("\n\nPlease type in the number associated to the operation you wish to perform.\n\n");
        printf("\t1- Addition\n");
        printf("\t2- Subtraction\n");
        printf("\t3- Scalar Multiplication\n");
        printf("\t4- Multiplication of two matrices\n");
        printf("\t5- Transpose\n");
        printf("\t6- Determinant\n");
        printf("\t7- Inverse\n");
        printf("\t8- View Log");
        printf("\n\nEnter your choice: ");
        scanf(" %d", &operation);


        switch (operation){

        case 1:

            printf("\n\n\t\tMatrix Addition\n\n");
            addition();

            break;

        case 2:

            printf("\n\n\t\tMatrix Subtraction\n\n");
            subtraction();
            break;

        case 3:

            printf("\n\n\t\tMatrix Scalar Multiplication\n\n");
            scalarmultiplication();

            break;

        case 4:

            printf("\n\n\t\tMatrix Multiplication\n\n");
            multiplication();

            break;

        case 5:

            printf("\n\n\t\tMatrix Transpose\n\n");
            transpose();

            break;

        case 6:

            printf("\n\n\t\tMatrix Determinant\n\n");
            determinant();

            break;

        case 7:

            printf("\n\n\t\tMatrix Inverse\n\n");
            inverse();

            break;


        default:
            printf("\nIncorrect option! Please choose a number 1-7.\n");
            break;
        }

        printf("\n\nDo you want to calculate again? Y/N\n");
        scanf(" %c", &again);
        again = toupper(again);
    }
    

    return 0;
}

#endif