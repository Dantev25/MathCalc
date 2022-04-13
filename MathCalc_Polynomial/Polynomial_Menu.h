#ifndef POLYNOMIAL_MENU_H_INCLUDED
#define POLYNOMIAL_MENU_H_INCLUDED

#include"Polynomial_Addition.h"
#include"Polynomial_QuadRoots.h"
#include"Polynomial_Multiplication.h"
#include"Polynomial_Subtraction.h"




int PolynomialMenu()
{
    int operation;
    char again = 'Y';

    while (again == 'Y')
    {

        printf("\n\t\tWelcome to the Polynomial Operation Menu\n");
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

        case 5:

            printf("\n\n\t\tWelcome to Polynomial Log\n\n");
            //log();

            break;

        default:
            printf("\nIncorrect option! Please choose a number 1-5.\n");
            break;
        }

        printf("\n\nDo you want to calculate with polynomial again? Y/N\n");
        scanf(" %c", &again);
        again = toupper(again);
    }
    printf("\n\nGoodbye!\n\n");

    return 0;
}

#endif