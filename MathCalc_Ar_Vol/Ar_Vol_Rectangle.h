#ifndef AR_VOL_RECTANGLE_H_INCLUDED
#define AR_VOL_RECTANGLE_H_INCLUDED

/*function to calculate area and perimeter of rectangle*/
float rectangle()
{
    float l, b, area, perimeter;
    time_t t;   // not a primitive datatype
    time(&t);

    FILE *fptr;

    printf("Enter the length and breadth of the rectangle:\n");
    printf("Length = ");
    scanf("%f",&l);
    printf("Breadth = ");
    scanf("%f",&b);

    while((l <= 0)||(b <= 0)){
        if(l <= 0){
            printf("\nCan only input positive integer for length!\nInput again!\n");
            printf("Length = ");
            scanf("%f",&l);
        }

        else if(b <= 0){
           printf("\nCan only input positive integer for breadth!\nInput again!\n"); 
           printf("Breadth = ");
           scanf("%f",&b);
        }
    }

    area = l * b;                //formula for area
    perimeter = (l + b) * 2;     //formula for volume

    printf("\nArea of rectangle = %.2f\n",area);
    printf("Perimeter of rectangle = %.2f\n",perimeter);

    fptr = (fopen("MathCalc_Ar_Vol/Ar_Vol_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    /*entry in log file*/
    fprintf(fptr,"------------------------------------------------\n");
    fprintf(fptr,"Executed on: %s",ctime(&t));
    fprintf(fptr,"Shape : Rectangle\n");
    fprintf(fptr,"Input:\n\tlength = %.2f, breadth = %.2f\n",l,b);
    fprintf(fptr,"Output\n\tArea = %.2f\n\tPerimeter = %.2f\n\n",area,perimeter);

    fclose(fptr);

    return 0;
}

#endif