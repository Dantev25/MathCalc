#ifndef AR_VOL_PYRAMID_H_INCLUDED
#define AR_VOL_PYRAMID_H_INCLUDED

float pyramid()
{
    float l, b, h, sa, vol, x, y;
    time_t t;   // not a primitive datatype
    time(&t);

    FILE *fptr;

    printf("Enter the length and breadth of the pyramid base:\n");
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

    printf("\nEnter the height of the pyramid: ");
    scanf("%f",&h);

    while( h <= 0){
        printf("\nCan only input positive integer for height!\nInput again!\n");
        printf("Height = ");
        scanf("%f",&h);
    }

    x = l/2;
    y = b/2;

    sa = (l * b) + (l * sqrt((pow(y,2)) + (pow(h,2)))) + (b * sqrt((pow(x,2)) + (pow(h,2))));
    vol = (l * b * h)/3;

    printf("\nSurface area of pyramid = %.2f\n",sa);
    printf("Volume of pyramid = %.2f\n",vol);

    fptr = (fopen("MathCalc_Ar_Vol/Ar_Vol_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"executed on: %s",ctime(&t));
    fprintf(fptr,"Shape : Pyramid\n");
    fprintf(fptr,"INPUT:\n\tlength of base = %.2f, breadth of base = %.2f, height = %.2f\n",l,b,h);
    fprintf(fptr,"OUTPUT:\n\tSurface area = %.2f\n\tVolume = %.2f\n\n\n",sa,vol);

    fclose(fptr);

    return 0;
}

#endif