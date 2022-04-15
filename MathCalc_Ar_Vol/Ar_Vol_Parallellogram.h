#ifndef AR_VOL_PARALLELLOGRAM_H_INCLUDED
#define AR_VOL_PARALLELLOGRAM_H_INCLUDED

float parallellogram()
{
    float side, base, height, area, perimeter;
    time_t t;   // not a primitive datatype
    time(&t);

    FILE *fptr;

    printf("Enter the length of the side and base of the parrallellogram:\n");
    printf("side = ");
    scanf("%f",&side);
    printf("base = ");
    scanf("%f",&base);

    while((side <= 0)||(base <= 0)){
        if(side <=0){
           printf("\nCan only input positive integer for side!\nInput again!\n");
           printf("side = ");
           scanf("%f",&side); 
        }
        else if(base <= 0){
            printf("\nCan only input positive integer for base!\nInput again!\n");
            printf("base = ");
            scanf("%f",&base);
        }
    }

    printf("\nEnter the height of the parallellogram: ");
    scanf("%f",&height);

    while(height <= 0){
        printf("\nCan only input positive integer for height!\nInput again!\n");
        printf("height = ");
        scanf("%f",&height);
    }

    area = base * height;
    perimeter = (side + base) * 2;

    printf("\nArea of parallellogram = %.2f\n",area);
    printf("perimeter of parallellogram = %.2f\n",perimeter);

    fptr = (fopen("MathCalc_Ar_Vol/Ar_Vol_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"executed on: %s",ctime(&t));
    fprintf(fptr,"Shape : Parallellogram\n");
    fprintf(fptr,"INPUT:\n\tside = %.2f, base = %.2f, height = %.2f\n",side,base,height);
    fprintf(fptr,"OUTPUT:\n\tArea = %.2f\n\tPerimeter = %.2f\n\n\n",area,perimeter);

    fclose(fptr);

    return 0;
}

#endif