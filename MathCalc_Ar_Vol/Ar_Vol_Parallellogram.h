#ifndef AR_VOL_PARALLELLOGRAM_H_INCLUDED
#define AR_VOL_PARALLELLOGRAM_H_INCLUDED

float parallellogram()
{
    float side, base, height, area, perimeter;

    printf("Enter the length of the side and base, and height of the parrallellogram:\n");
    printf("side = ");
    scanf("%f",&side);
    printf("base = ");
    scanf("%f",&base);
    printf("height = ");
    scanf("%f",&height);

    while((side <= 0)||(base <= 0)||(height <= 0)){
        printf("\nCan only input positive integers!\nInput again!\n");
        printf("side = ");
        scanf("%f",&side);
        printf("base = ");
        scanf("%f",&base);
        printf("height = ");
        scanf("%f",&height);
    }

    area = base * height;
    perimeter = (side + base) * 2;

    printf("\nArea of parallellogram = %.2f\n",area);
    printf("perimeter of parallellogram = %.2f\n",perimeter);

    return 0;
}

#endif