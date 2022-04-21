#ifndef AR_VOL_SQUARE_H_INCLUDED
#define AR_VOL_SQUARE_H_INCLUDED

/*function to find area and perimeter of square*/
float square()
{
    float x, area, perimeter;
    time_t t;   // not a primitive datatype
    time(&t);

    FILE *fptr;

    printf("Enter the length of the side of the square: ");
    scanf("%f",&x);

    while(x <= 0){
        printf("\nCan only input positive integer for length of the side!\nInput again: ");
        scanf("%f",&x);
    }

    area = x * x;         //formula for area
    perimeter = x * 4;    //formula for perimeter

    printf("\nArea of square = %.2f\n",area);
    printf("Perimeter of square = %.2f\n",perimeter);

    fptr = (fopen("MathCalc_Ar_Vol/Ar_Vol_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    /*Entry in log file*/
    fprintf(fptr,"------------------------------------------------\n");
    fprintf(fptr,"Executed on: %s",ctime(&t));
    fprintf(fptr,"Shape : Square\n");
    fprintf(fptr,"Input:\n\tlength of side = %.2f\n",x);
    fprintf(fptr,"Output:\n\tArea = %.2f\n\tPerimeter = %.2f\n\n",area,perimeter);

    fclose(fptr);

    return 0;
}

#endif