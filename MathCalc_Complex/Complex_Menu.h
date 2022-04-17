#ifndef COMPLEX_MENU_H_INCLUDED
#define COMPLEX_MENU_H_INCLUDED
#include"Complex_Addition.h"
#include"Complex_Division.h"
#include"Complex_Multiplication.h"
#include"Complex_Subtraction.h"

int complexMenu()
{
    int choice;
    char again = 'Y';

    printf("\n\t\tWelcome to the Complex Numbers Operation Menu\n");
    while(again == 'Y'){
        printf("\n\nPlease type in the number associated to the operation you wish to perform.\n\n");
        printf("\t1- Addition\n");
        printf("\t2- Subtraction\n");
        printf("\t3- Multiplication\n");
        printf("\t4- Division\n");
        printf("\n\nEnter your choice: ");
        scanf(" %d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n\n\t\tComplex Numbers Addition\n\n");
            complexAdd();
            break;

        case 2:
            printf("\n\n\t\tComplex Numbers Subtraction\n\n");
            complexSub();
            break;

        case 3:
            printf("\n\n\t\tComplex Numbers Multiplication\n\n");
            complexMul();
            break;

        case 4:
            printf("\n\n\t\tComplex Numbers Division\n\n");
            complexDiv();
            break;
        
        default:
            printf("\nIncorrect option! Please choose a number 1-4.\n");
            break;
        }
        printf("\n\nDo you want to calculate again? Y/N\n");
        scanf(" %c", &again);
        again = toupper(again);
    }

    return 0;
}
#endif