#ifndef AR_VOL_CUBOID_H_INCLUDED
#define AR_VOL_CUBOID_H_INCLUDED

float cuboid()
{
    float l, b, h, sa, vol;
    time_t t;   // not a primitive datatype
    time(&t);

    FILE *fptr;

    printf("Enter the size of length, breadth and height of the cuboid:\n");
    printf("length = ");
    scanf("%f",&l);
    printf("breadth = ");
    scanf("%f",&b);
    printf("height = ");
    scanf("%f",&h);

    while((l <= 0)||(b <= 0)||(h <=0)){
        if(l <= 0){
            printf("\nCan only input positive integer for length!\nInput again!\n");
            printf("length = ");
            scanf("%f",&l);
        }
        else if(b <= 0){
            printf("\nCan only input positive integer for breadth!\nInput again!\n");
            printf("breadth = ");
            scanf("%f",&b);
        }
        else if(h <= 0){
            printf("\nCan only input positive integer for height!\nInput again!\n");
            printf("height = ");
            scanf("%f",&h);
        }
    }

    sa = ((b * l) + (l * h) + (h * b)) *2;
    vol = l * b * h;

    printf("\nSurface area of cuboid = %.2f\n",sa);
    printf("Volume of cuboid = %.2f\n",vol);

    fptr = (fopen("MathCalc_Ar_Vol/Ar_Vol_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"executed on: %s",ctime(&t));
    fprintf(fptr,"Shape : Cuboid\n");
    fprintf(fptr,"INPUT\n\tlength = %.2f, breadth = %.2f, height = %.2f\n",l,b,h);
    fprintf(fptr,"OUTPUT:\n\tSurface area = %.2f\n\tVolume = %.2f\n\n\n",sa,vol);

    fclose(fptr);

    return 0;
}

#endif