#ifndef AR_VOL_CUBE_H_INCLUDED
#define AR_VOL_CUBE_H_INCLUDED

float cube()
{
    float x, sa, vol;

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

    return 0;
}

#endif