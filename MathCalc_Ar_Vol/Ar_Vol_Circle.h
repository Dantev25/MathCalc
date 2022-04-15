#ifndef AR_VOL_CIRCLE_H_INCLUDED
#define AR_VOL_CIRCLE_H_INCLUDED

float circle()
{
    float r, area, perimeter;
    time_t t;   // not a primitive datatype
    time(&t);

    FILE *fptr;

    printf("Enter the radius of the circle: ");
    scanf("%f",&r);

    while(r <= 0){
        printf("\nCan only input positive integer for radius!\nInput again: ");
        scanf("%f",&r);
    }

    area = M_PI * r *r;
    perimeter = 2 * M_PI * r;

    printf("\nArea of circle = %.2f\n",area);
    printf("perimeter of circle = %.2f\n",perimeter);

    fptr = (fopen("MathCalc_Ar_Vol/Ar_Vol_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"executed on: %s",ctime(&t));
    fprintf(fptr,"Shape : Circle\n");
    fprintf(fptr,"INPUT:\n\tradius = %.2f\n",r);
    fprintf(fptr,"OUTPUT:\n\tArea = %.2f\n\tPerimeter = %.2f\n\n\n",area,perimeter);

    fclose(fptr);

    return 0;
}

#endif