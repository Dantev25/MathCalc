#ifndef AR_VOL_CIRCLE_H_INCLUDED
#define AR_VOL_CIRCLE_H_INCLUDED

/*function to find area and perimeter of circle*/
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

    area = M_PI * r *r;          //formula for area of circle
    perimeter = 2 * M_PI * r;    //formula for perimeter of circle

    printf("\nArea of circle = %.2f\n",area);
    printf("Perimeter of circle = %.2f\n",perimeter);

    fptr = (fopen("MathCalc_Ar_Vol/Ar_Vol_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

<<<<<<< HEAD
    /*Entry in log file*/
    fprintf(fptr,"------------------------------------------------\n");
=======
    fprintf(fptr,"----------------------------------------------------------------------\n");
>>>>>>> afa45e2ecdddb5aafaa31fae48eefa75b432ed6b
    fprintf(fptr,"Executed on: %s",ctime(&t));
    fprintf(fptr,"Shape : Circle\n");
    fprintf(fptr,"Input:\n\tradius = %.2f\n",r);
    fprintf(fptr,"Output:\n\tArea = %.2f\n\tPerimeter = %.2f\n\n",area,perimeter);

    fclose(fptr);

    return 0;
}

#endif