/* 
BSc Data Science Y2S1
Software Engineering Project 
Team: Group 1
Authors:
Ghingut M. Oomar ID: 2016304
Kholeepa B. Sadiyah ID: 2014254
Rajanah Mrishana ID: 2011318
*/


#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<time.h>

#include "MathCalc_Polynomial/Polynomial_Menu.h"
#include "MathCalc_Matrix/Matrix_Menu.h"
#include "MathCalc_Ar_Vol/Ar_Vol_Menu.h"
#include "MathCalc_Files/File_View.h"
#include "MathCalc_Complex/Complex_Menu.h"
#include "MathCalc_Scientific_Calculator\Scientific_Calculator.h"

int main()
{
    int operation;
    char again = 'Y';
    system("cls");
    system("color 70");
    printf("\n\t\t\tWelcome to MathCalc!\n\t\t Your user-friendly smart calculator\t\t");
    while (again == 'Y')
    {

        printf("\n\nMain Menu:\n");
        printf("\nPlease type in the number associated to the section you wish to work on.\n\n");
        printf("\t1- Area, Volume and Perimeter of various 2D and 3D shapes\n");
        printf("\t2- Polynomial operations\n");
        printf("\t3- Matrix operations\n");
        printf("\t4- Complex Numbers operations\n");
        printf("\t5- Scientific Calculator\n");
        printf("\t6- View Log Files");
        printf("\n\nEnter your choice: ");
        scanf("%d", &operation);


        switch (operation){

        case 1:

            Ar_VolMenu();

            break;

        case 2:


            PolynomialMenu();
            break;

        case 3:

            MatrixMenu();

            break;

        case 4:


            complexMenu();

            break;

        case 5:

            scalc();

            break;
        case 6:

            FileView();

            break;

        default:
            printf("\nIncorrect option! Please choose a number 1-6.\n");
            break;
        }

        printf("\n\nDo you want to work on another section? Y/N\n");
        scanf(" %c", &again);
        again = toupper(again);
    }
    printf("\n\nGoodbye and thank you for using our product!\n\n");

    return 0;
}
