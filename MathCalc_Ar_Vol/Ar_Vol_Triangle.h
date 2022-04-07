#ifndef AR_VOL_TRIANGLE_H_INCLUDED
#define AR_VOL_TRIANGLE_H_INCLUDED
#include<math.h>

float triangle()
{
    float s1, s2, s3, s, area, perimeter;
    FILE *fptr;

    printf("Input the length of the three sides of the triangle:\n");
    printf("side 1 = ");
    scanf("%f",&s1);
    printf("side 2 = ");
    scanf("%f",&s2);
    printf("side 3 = ");
    scanf("%f",&s3);

    while((s1 <= 0)||(s2 <= 0)||(s3 <= 0)){
        printf("\nCan only input positive integers!\nInput again!\n");
        printf("side 1 = ");
        scanf("%f",&s1);
        printf("side 2 = ");
        scanf("%f",&s2);
        printf("side 3 = ");
        scanf("%f",&s3);
    }

    s = (s1 + s2 +s3)/2;
    area = sqrt(s * (s - s1) * (s - s2) * (s-s3));
    perimeter = s1 + s2 + s3;

    printf("\nArea of triangle = %.2f\n",area);
    printf("perimeter of triangle = %.2f\n",perimeter);

    fptr = (fopen("MathCalc_Ar_Vol/Ar_Vol_Log.txt","a"));
    
    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"Shape = triangle\n");
    fprintf(fptr,"side 1 = %.2f, side 2 = %.2f, side 3 = %.2f\n",s1,s2,s3);
    fprintf(fptr,"Area = %.2f\nPerimeter = %.2f\n\n",area,perimeter);

    fclose(fptr);

    return 0;
}

#endif