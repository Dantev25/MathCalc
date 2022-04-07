#ifndef AR_VOL_CUBOID_H_INCLUDED
#define AR_VOL_CUBOID_H_INCLUDED

float cuboid()
{
    float l, b, h, sa, vol;

    printf("Enter the size of length, breadth and height of the cuboid:\n");
    printf("length = ");
    scanf("%f",&l);
    printf("breadth = ");
    scanf("%f",&b);
    printf("height = ");
    scanf("%f",&h);

    while((l <= 0)||(b <= 0)||(h <=0)){
        printf("\nCan only input positive integers!\nInput again!\n");
        printf("length = ");
        scanf("%f",&l);
        printf("breadth = ");
        scanf("%f",&b);
        printf("height = ");
        scanf("%f",&h);
    }

    sa = ((b * l) + (l * h) + (h * b)) *2;
    vol = l * b * h;

    printf("\nSurface area of cuboid = %.2f\n",sa);
    printf("Volume of cuboid = %.2f\n",vol);

    return 0;
}

#endif