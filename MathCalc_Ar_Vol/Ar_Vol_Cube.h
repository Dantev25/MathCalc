#ifndef AR_VOL_CUBE_H_INCLUDED
#define AR_VOL_CUBE_H_INCLUDED

float cube()
{
    float x, sa, vol;
    time_t t;   // not a primitive datatype
    time(&t);

    FILE *fptr;

    printf("Enter the length of the side of the cube: ");
    scanf("%f",&x);

    while(x <= 0){
        printf("\nCan only input positive integer for length of the side!\nInput again: ");
        scanf("%f",&x);
    }

    sa = (x * x) * 6;
    vol = x * x * x;

    printf("\nSurface area of cube = %.2f\n",sa);
    printf("Volume of cube = %.2f\n",vol);

    fptr = (fopen("MathCalc_Ar_Vol/Ar_Vol_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"----------------------------------------------------------------------\n");
    fprintf(fptr,"Executed on: %s",ctime(&t));
    fprintf(fptr,"Shape : Cube\n");
    fprintf(fptr,"INPUT:\n\tlength of side = %.2f\n",x);
    fprintf(fptr,"OUTPUT:\n\tSurface area = %.2f\n\tVolume = %.2f\n\n\n",sa,vol);

    fclose(fptr);

    return 0;
}

#endif