#ifndef AR_VOL_RHOMBUS_H_INCLUDED
#define AR_VOL_RHOMBUS_H_INCLUDED

float rhombus()
{
    float side, d1, d2, area, perimeter;

    printf("Enter the length of the side and the two diagonals of the rhombus:\n");
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
    printf("perimeter of rhombus = %.2f\n",perimeter);

    return 0;
}

#endif