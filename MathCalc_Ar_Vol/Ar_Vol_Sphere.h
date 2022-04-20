#ifndef AR_VOL_SPHERE_H_INCLUDED
#define AR_VOL_SPHERE_H_INCLUDED

float sphere()
{
    float r, sa, vol;
    time_t t;   // not a primitive datatype
    time(&t);

    FILE *fptr;

    printf("Enter the value of the radius: ");
    scanf("%f",&r);

    while(r <= 0){
        printf("\nCan only input positive integer for radius!\nInput again: ");
        scanf("%f",&r);
    }

    sa = 4* M_PI * r * r;
    vol = (4.0/3) * M_PI * r * r * r;

    printf("\nSurface area of sphere = %.2f\n",sa);
    printf("Volume of sphere = %.2f\n",vol);

    fptr = (fopen("MathCalc_Ar_Vol/Ar_Vol_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"----------------------------------------------------------------------\n");
    fprintf(fptr,"Executed on: %s",ctime(&t));
    fprintf(fptr,"Shape : Sphere\n");
    fprintf(fptr,"INPUT:\n\tradius = %.2f\n",r);
    fprintf(fptr,"OUTPUT:\n\tSurface area = %.2f\n\tvolume = %.2f\n\n\n",sa,vol);

    fclose(fptr);

    return 0;
}

#endif