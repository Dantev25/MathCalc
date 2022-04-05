#ifndef AR_VOL_CIRCLE_H_INCLUDED
#define AR_VOL_CIRCLE_H_INCLUDED
#include<math.h>

float circle()
{
    float r, area, perimeter;

    printf("Enter the radius of the circle: ");
    scanf("%f",&r);

    area = M_PI * r *r;
    perimeter = 2 * M_PI * r;

    printf("\nArea of circle = %.2f\n",area);
    printf("perimeter of circle = %.2f\n",perimeter);

    return 0;
}

#endif