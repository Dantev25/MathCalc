#ifndef AR_VOL_RHOMBUS_H_INCLUDED
#define AR_VOL_RHOMBUS_H_INCLUDED
#include<math.h>
#include<time.h>

float rhombus()
{
    float side, x, d1, d2, area, perimeter, a;
    int choice;
    time_t t;   // not a primitive datatype
    time(&t);

    FILE *fptr;
    fptr = (fopen("MathCalc_Ar_Vol/Ar_Vol_Log.txt","a"));

    printf("By which method would you like to carry the operations for rhombus:\n");
    printf("1. By using angle\n2. By using diagonal");
    printf("\n\nInput your choice: ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Input the length of the side of the rhombus: ");
        scanf("%f",&side);

        while(side <= 0){
        printf("\nCan only input positive integer for length of the side!\nInput again: ");
        scanf("%f",&side);
        }

        printf("Input value of the angle (in radians): ");
        scanf("%f",&x);

        while((x <= 0)||(x >= M_PI)){
            printf("Angle should have a value between 0 and pi!\nInput again: ");
            scanf("%f",&x);
        }

        a = pow(side,2);
        d1 = sqrt(a + a - (2 * side * side * cos(x)));
        d2 = sqrt((4 * a) - (pow(d1,2)));

        printf("\nCalculated diagonal 1 = %.2f\n",d1);
        printf("Calculated diagonal 2 = %.2f\n",d2);

        area = (d1 * d2)/2;
        perimeter = side * 4;

        printf("\nArea of rhombus = %.2f\n",area);
        printf("perimeter of rhombus = %.2f\n",perimeter);

        fprintf(fptr,"executed on: %s",ctime(&t));
        fprintf(fptr,"Shape = rhombus\n");
        fprintf(fptr,"length of side = %.2f, angle (in radians) = %.3f\n",side,x);
        fprintf(fptr,"Calculated diagonal 1 = %.2f, calculated diagonal 2 = %.2f\n",d1,d2);
        fprintf(fptr,"Area = %.2f\nPerimeter = %.2f\n\n",area,perimeter);

        fclose(fptr);
        break;

    case 2:
        printf("Input the length of the side of the rhombus: ");
        scanf("%f",&side);

        while(side <= 0){
        printf("\nCan only input positive integer for length of the side!\nInput again: ");
        scanf("%f",&side);
        }

        printf("Input length of diagonal 1 of the rhombus: ");
        scanf("%f",&d1);

        while(d1 <= 0){
        printf("\nCan only input positive integer for length of diagonal!\nInput again: ");
        scanf("%f",&d1);
        }

        d2 = sqrt((4 * pow(side,2)) - (pow(d1,2)));
        printf("\nCalculated diagonal 2 = %.2f\n",d2);

        area = (d1 * d2)/2;
        perimeter = side * 4;

        printf("\nArea of rhombus = %.2f\n",area);
        printf("perimeter of rhombus = %.2f\n",perimeter);

        fprintf(fptr,"executed on: %s",ctime(&t));
        fprintf(fptr,"Shape = rhombus\n");
        fprintf(fptr,"length of side = %.2f, diagonal 1 = %.2f\n",side,d1);
        fprintf(fptr,"calculated diagonal 2 = %.2f\n",d2);
        fprintf(fptr,"Area = %.2f\nPerimeter = %.2f\n\n",area,perimeter);

        fclose(fptr);
        break;
    
    default:
        break;
    }

    return 0;
}

#endif