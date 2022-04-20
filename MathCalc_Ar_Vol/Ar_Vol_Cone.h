#ifndef AR_VOL_CONE_H_INCLUDED
#define AR_VOL_CONE_H_INCLUDED

float cone()
{
    float r, h, sa, vol;
    time_t t;   // not a primitive datatype
    time(&t);

    FILE *fptr;

    printf("Enter the radius of the circular base of the cone: ");
    scanf("%f",&r);

    while(r <= 0){
        printf("\nCan only input positive integer for radius!\nInput again!\n");
        printf("Radius = ");
        scanf("%f",&r);
    }

    printf("\nEnter the height of the cone: ");
    scanf("%f",&h);

    while(h <= 0){
        printf("\nCan only input positive integer for height!\nInput again!\n");
        printf("Height = ");
        scanf("%f",&h);
    }

    sa = M_PI * r * (r + sqrt((pow(h,2)) + (pow(r,2))));
    vol = M_PI * r * r * (h/3);

    printf("\nSurface area of cone = %.2f\n",sa);
    printf("Volume of cone = %.2f\n",vol);

    fptr = (fopen("MathCalc_Ar_Vol/Ar_Vol_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"----------------------------------------------------------------------\n");
    fprintf(fptr,"Executed on: %s",ctime(&t));
    fprintf(fptr,"Shape : Cone\n");
    fprintf(fptr,"INPUT:\n\tradius of circular base = %.2f, height = %.2f\n",r,h);
    fprintf(fptr,"OUTPUT:\n\tSurface area = %.2f\n\tVolume = %.2f\n\n\n",sa,vol);

    fclose(fptr);

    return 0;
}

#endif