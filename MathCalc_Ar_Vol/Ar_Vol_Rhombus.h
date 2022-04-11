#ifndef AR_VOL_RHOMBUS_H_INCLUDED
#define AR_VOL_RHOMBUS_H_INCLUDED
#include<math.h>
#include<time.h>

float rhombus()
{
    float side, x, d1, d2, area, perimeter, a;
    int choice;

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
        break;
    
    default:
        break;
    }

   /* printf("Enter the length of the side and the two diagonals of the rhombus:\n");
    printf("side = ");
    scanf("%f",&side);
    printf("diagonal 1 = ");
    scanf("%f",&d1);
    printf("diagonal 2 = ");
    scanf("%f",&d2);

    while((side <=0)||(d1 <= 0)||(d2 <= 0)){
        printf("\nCan only input positive integers!\nInput again!\n");
        printf("side = ");
        scanf("%f",&side);
        printf("diagonal 1 = ");
        scanf("%f",&d1);
        printf("diagonal 2 = ");
        scanf("%f",&d2);
    }

    area = (d1 * d2)/2;
    perimeter = side * 4;

    printf("\nArea of rhombus = %.2f\n",area);
    printf("perimeter of rhombus = %.2f\n",perimeter);*/

    return 0;
}

#endif