#ifndef AR_VOL_TRIANGLE_H_INCLUDED
#define AR_VOL_TRIANGLE_H_INCLUDED
#include<math.h>
#include<time.h>

float triangle()
{
    float s1, s2, s3, s, base, height, area, perimeter;
    int choice;
    time_t t;   // not a primitive datatype
    time(&t);

    FILE *fptr;
    fptr = (fopen("MathCalc_Ar_Vol/Ar_Vol_Log.txt","a"));

    printf("Choose the number associated with the type of triangle you want to work with.\n");
    printf("1. Equilateral triangle\n2. Right-angled triangle\n3.Any other triangle");
    printf("\n\nInput your choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("Enter the length of side of the triangle: ");
            scanf("%f",&s);

            while(s <= 0){
                printf("\nCan only input positive integer for length of side!\nInput again: ");
                scanf("%f",&s);
            } 

            area = (sqrt(3)/4) * (pow(s,2));
            perimeter = s * 3;

            printf("\nArea of triangle = %.2f\n",area);
            printf("perimeter of triangle = %.2f\n",perimeter);

            fprintf(fptr,"executed on: %s",ctime(&t));
            fprintf(fptr,"Shape = equilateral triangle\n");
            fprintf(fptr,"length of side = %.2f\n",s);
            fprintf(fptr,"Area = %.2f\nPerimeter = %.2f\n\n",area,perimeter);

            fclose(fptr);
            break;

        case 2:
            printf("Enter the base and height of the triangle:\n");
            printf("Base = ");
            scanf("%f",&base);
            printf("Height = ");
            scanf("%f",&height);

            while((base <= 0)||(height <= 0)){
                if(base <= 0){
                    printf("\nCan only input positive integer for base!\nInput again!\n");
                    printf("Base = ");
                    scanf("%f",&base);
                }

                else if(height <= 0){
                    printf("\nCan only input positive integer for height!\nInput again!\n"); 
                    printf("Height = ");
                    scanf("%f",&height);
                }
            }

            printf("\nEnter the length of third side of the triangle: ");
            scanf("%f",&s);

            while(s <= 0){
                printf("\nCan only input positive integer for length of side!\nInput again: ");
                scanf("%f",&s);
            } 

            area = 0.5 * base * height;
            perimeter = base + height + s;

            printf("\nArea of triangle = %.2f\n",area);
            printf("perimeter of triangle = %.2f\n",perimeter);

            fprintf(fptr,"executed on: %s",ctime(&t));
            fprintf(fptr,"Shape = right-angled triangle\n");
            fprintf(fptr,"base = %.2f, height = %.2f, side = %.2f\n",base, height,s);
            fprintf(fptr,"Area = %.2f\nPerimeter = %.2f\n\n",area,perimeter);

            fclose(fptr);
            break;

        case 3:
            printf("Enter the length of the 3 sides of the triangle:\n");
            printf("side 1 = ");
            scanf("%f",&s1);
            printf("side 2 = ");
            scanf("%f",&s2);
            printf("side 3 = ");
            scanf("%f",&s3);

            while((s1 <= 0)||(s2 <= 0)||(s3 <= 0)){
                if(s1 <= 0){
                    printf("\nCan only input positive integer for length of side 1!\nInput again!\n");
                    printf("side 1 = ");
                    scanf("%f",&s1);
                }

                else if(s2 <= 0){
                    printf("\nCan only input positive integer for length of side 2!\nInput again!\n");
                    printf("side 2 = ");
                    scanf("%f",&s2);
                }

                else if(s3 <= 0){
                    printf("\nCan only input positive integer for length of side 3!\nInput again!\n");
                    printf("side 3 = ");
                    scanf("%f",&s3);
                }
            }

            s = (s1 + s2 + s3)/2;
            area = sqrt(s * (s-s1) * (s-s2) * (s-s3));
            perimeter = s1 + s2 + s3;

            printf("\nArea of triangle = %.2f\n",area);
            printf("perimeter of triangle = %.2f\n",perimeter);

            fprintf(fptr,"executed on: %s",ctime(&t));
            fprintf(fptr,"Shape = triangle\n");
            fprintf(fptr,"side 1 = %.2f, side 2 = %.2f, side 3 = %.2f\n",s1,s2,s3);
            fprintf(fptr,"Area = %.2f\nPerimeter = %.2f\n\n",area,perimeter);

            fclose(fptr);
            break;
    }
    
    return 0;
}

#endif