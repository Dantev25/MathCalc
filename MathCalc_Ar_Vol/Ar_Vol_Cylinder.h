#ifndef AR_VOL_CYLINDER_H_INCLUDED
#define AR_VOL_CYLINDER_H_INCLUDED
#include<time.h>
#include<math.h>

float cylinder()
{
    float r, h, sa, vol;
    time_t t;   // not a primitive datatype
    time(&t);

    FILE *fptr;

    printf("Enter the radius of the circular base of the cylinder: ");
    scanf("%f",&r);

    while(r <= 0){
        printf("\nCan only input positive integer for radius!\nInput again: ");
        scanf("%f",&r);
    }

    printf("Enter the height of the cylinder: ");
    scanf("%f",&h);

    while(h <= 0){
        printf("\nCan only input positive integer for height!\nInput again: ");
        scanf("%f",&h);
    }

    sa = (2 * M_PI * r * r) + (2 * M_PI * r * h);
    vol = M_PI * r * r *h;

    printf("\nSurface area of cylinder = %.2f\n",sa);
    printf("Volume of cylinder = %.2f\n",vol);

    fptr = (fopen("MathCalc_Ar_Vol/Ar_Vol_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"executed on: %s",ctime(&t));
    fprintf(fptr,"Shape = cylinder\n");
    fprintf(fptr,"radius of circular base = %.2f, height = %.2f\n",r,h);
    fprintf(fptr,"Surface area = %.2f\nVolume = %.2f\n\n",sa,vol);

    fclose(fptr);

    return 0;
}

#endif