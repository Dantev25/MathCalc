#ifndef AR_VOL_RECTANGLE_H_INCLUDED
#define AR_VOL_RECTANGLE_H_INCLUDED

float rectangle()
{
    float l, b, area, perimeter;

    printf("Enter the length and breadth of the rectangle:\n");
    printf("Length = ");
    scanf("%f",&l);
    printf("Breadth = ");
    scanf("%f",&b);

    while((l <= 0)||(b <= 0)){
        printf("\nCan only input positive integers!\nInput again!\n");
        printf("Length = ");
        scanf("%f",&l);
        printf("Breadth = ");
        scanf("%f",&b);
    }

    area = l * b;
    perimeter = (l + b) * 2;

    printf("\nArea of rectangle = %.2f\n",area);
    printf("perimeter of rectangle = %.2f\n",perimeter);

    return 0;
}

#endif