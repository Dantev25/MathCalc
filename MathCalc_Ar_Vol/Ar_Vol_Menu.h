#ifndef AR_VOL_MENU_H_INCLUDED
#define AR_VOL_MENU_H_INCLUDED
#include"Ar_Vol_Circle.h"
#include"Ar_Vol_Cone.h"
#include"Ar_Vol_Cube.h"
#include"Ar_Vol_Cuboid.h"
#include"Ar_Vol_Cylinder.h"
#include"Ar_Vol_Parallellogram.h"
#include"Ar_Vol_Pyramid.h"
#include"Ar_Vol_Rectangle.h"
#include"Ar_Vol_Rhombus.h"
#include"Ar_Vol_Sphere.h"
#include"Ar_Vol_Square.h"
#include"Ar_Vol_Triangle.h"

int Ar_VolMenu()
{
    int choice;
    char again = 'Y';

    while(again == 'Y'){
        printf("\n\t\tWelcome to the 2D and 3D Shapes Operation Menu\n");
        printf("\n\nPlease type in the number associated to the shape you wish to work on.\n\n");
        printf("2D Shapes:\n");
        printf("\t1- Square\n\t2- Rectangle\n\t3- Circle\n\t4- Triangle\n\t5- Rhombus\n\t6- Parallellogram\n\n");
        printf("3D Shapes:\n");
        printf("\t7- Cube\n\t8- Cuboid\n\t9- Pyramid\n\t10- Cylinder\n\t11- Cone\n\t12- Sphere\n\n");
        printf("\t13- View log for 2D and 3D shapes");
        printf("\n\nInput your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("\n\t\tSQUARE\n\n");
            square();
            break;

        case 2:
            printf("\n\t\tRECTANGLE\n\n");
            rectangle();
            break;

        case 3:
            printf("\n\t\tCIRCLE\n\n");
            circle();
            break;

        case 4:
            printf("\n\t\tTRIANGLE\n\n");
            triangle();
            break;

        case 5:
            printf("\n\t\tRHOMBUS\n\n");
            rhombus();
            break;

        case 6:
            printf("\n\t\tPARALLELLOGRAM\n\n");
            parallellogram();
            break;

        case 7:
            printf("\n\t\tCUBE\n\n");
            cube();
            break;

        case 8:
            printf("\n\t\tCUBOID\n\n");
            cuboid();
            break;

        case 9:
            printf("\n\t\tPYRAMID\n\n");
            pyramid();
            break;

        case 10:
            printf("\n\t\tCYLINDER\n\n");
            cylinder();
            break;

        case 11:
            printf("\n\t\tCONE\n\n");
            cone();
            break;

        case 12:
            printf("\n\t\tSPHERE\n\n");
            sphere();
            break;
        
        default:
            printf("\nIncorrect option! Please choose a number between 1-13.\n");
            break;
        }
        printf("\n\nDo you want to perform more Shapes Operations? Y/N\n");
        scanf(" %c", &again);
        again = toupper(again);
    }
    printf("\n\nGoodbye!\n\n");

    return 0;
}

#endif
