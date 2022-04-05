#ifndef AR_VOL_SQUARE_H_INCLUDED
#define AR_VOL_SQUARE_H_INCLUDED

float square()
{
    float x, area, perimeter;

    printf("Enter the length of the side of the square: ");
    scanf("%f",&x);

    while(x <= 0){
        printf("\nCan only input positive integer for length of the side!\nInput again: ");
        scanf("%f",&x);
    }

    area = x*x;
    perimeter = x*4;

    printf("\nArea of square = %.2f\n",area);
    printf("perimeter of square = %.2f\n",perimeter);

    return 0;
}

#endif