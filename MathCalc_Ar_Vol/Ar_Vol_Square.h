#ifndef AR_VOL_SQUARE_H_INCLUDED
#define AR_VOL_SQUARE_H_INCLUDED

float square()
{
    float x, area, perimeter;

    FILE *fptr;

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

    fptr = (fopen("MathCalc_Ar_Vol/Ar_Vol_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"Shape = square\n");
    fprintf(fptr,"length of side = %.2f\n",x);
    fprintf(fptr,"Area = %.2f\nPerimeter = %.2f\n\n",area,perimeter);

    fclose(fptr);

    return 0;
}

#endif