#ifndef POLYNOMIAL_MENU_H_INCLUDED
#define POLYNOMIAL_MENU_H_INCLUDED

#include"Polynomial_Addition.h"
#include"Polynomial_QuadRoots.h"
#include"Polynomial_Multiplication.h"
#include"Polynomial_Subtraction.h"
#include"Polynomial_Division.h"



int PolynomialMenu()
{
    int operation;
    char again = 'Y';

    printf("\n\t\tWelcome to the Polynomial Operation Menu\n");
    while (again == 'Y')
    {

        printf("\n\nPlease type in the number associated to the operation you wish to perform.\n\n");
        printf("\t1- Addition\n");
        printf("\t2- Subtraction\n");
        printf("\t3- Multiplication of two polynomials\n");
        printf("\t4- Division of two polynomials\n");
        printf("\t5- View Polynomial Log");
        printf("\n\nEnter your choice: ");
        scanf("%d", &operation);


        switch (operation){

        case 1:

            printf("\n\n\t\tPolynomial Addition\n\n");
            PolyAdd();

            break;

        case 2:

            printf("\n\n\t\tPolynomial Subtraction\n\n");
            PolySub();
            break;

        case 3:

            printf("\n\n\t\tPolynomial Multiplication\n\n");
            PolyMult();

            break;

        case 4:

            printf("\n\n\t\tPolynomial Division\n\n");
            PolyDiv();

            break;

        default:
            printf("\nIncorrect option! Please choose a number 1-4.\n");
            break;
        }

        printf("\n\nDo you want to perform calculations with polynomial again? Y/N\n");
        scanf(" %c", &again);
        again = toupper(again);
    }
    

    return 0;
}

#endif