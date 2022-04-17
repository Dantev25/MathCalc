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


int main()
{
    int operation;
    char again = 'Y';
    printf("Welcome to our Mathematical Calculator!");
    while (again == 'Y')
    {

        printf("\n\t\tMain Menu:\n");
        printf("\n\nPlease type in the number associated to the operation you wish to perform.\n\n");
        printf("\t1- Area, Volume and Perimiter of various 2D and 3D shapes\n");
        printf("\t2- Polynomial operations\n");
        printf("\t3- Matrix operation\n");
        printf("\t4- Complex Numbers operations\n");
        printf("\t5- View Log Files");
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

            printf("\n\n\t\tLog Files\n\n");
            FileView();

            break;

        default:
            printf("\nIncorrect option! Please choose a number 1-5.\n");
            break;
        }

        printf("\n\nDo you want to calculate again? Y/N\n");
        scanf(" %c", &again);
        again = toupper(again);
    }
    printf("\n\nGoodbye and thank you for using our product!\n\n");

    return 0;
}
