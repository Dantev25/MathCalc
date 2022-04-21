#ifndef AR_VOL_TRIANGLE_H_INCLUDED
#define AR_VOL_TRIANGLE_H_INCLUDED

/*function to calculate area and perimeter of triangle*/
float triangle()
{
    float s1, s2, s3, s, base, height, area, perimeter;
    int choice;
    char again = 'Y';
    time_t t;   // not a primitive datatype
    time(&t);

    FILE *fptr;
    
    while(again == 'Y'){
        fptr = (fopen("MathCalc_Ar_Vol/Ar_Vol_Log.txt","a"));
        
        if(fptr==NULL){
            printf("Error!");
            exit(1);
        }

        printf("Choose the number associated with the type of triangle you want to work with.\n");
        printf("1. Equilateral triangle\n2. Right-angled triangle\n3. Any other triangle");
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

                printf("\nArea of triangle = %.2f\n",area);          //formula for area
                printf("Perimeter of triangle = %.2f\n",perimeter);  //formula for volume

                /*entry in log file*/
                fprintf(fptr,"------------------------------------------------\n");
                fprintf(fptr,"Executed on: %s",ctime(&t));
                fprintf(fptr,"Shape : Equilateral triangle\n");
                fprintf(fptr,"Input:\n\tlength of side = %.2f\n",s);
                fprintf(fptr,"Output:\n\tArea = %.2f\n\tPerimeter = %.2f\n\n",area,perimeter);

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

                area = 0.5 * base * height;    //formula for area
                perimeter = base + height + s; //formula for volume

                printf("\nArea of triangle = %.2f\n",area);
                printf("Perimeter of triangle = %.2f\n",perimeter);

                /*entry in log file*/
                fprintf(fptr,"------------------------------------------------\n");
                fprintf(fptr,"Executed on: %s",ctime(&t));
                fprintf(fptr,"Shape : Right-angled triangle\n");
                fprintf(fptr,"Input:\n\tbase = %.2f, height = %.2f, side = %.2f\n",base, height,s);
                fprintf(fptr,"Output:\n\tArea = %.2f\n\tPerimeter = %.2f\n\n",area,perimeter);

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
                area = sqrt(s * (s-s1) * (s-s2) * (s-s3));  //formula for area
                perimeter = s1 + s2 + s3;                   //formula for perimeter

                printf("\nArea of triangle = %.2f\n",area);
                printf("Perimeter of triangle = %.2f\n",perimeter);

                /*entry in log file*/
                fprintf(fptr,"------------------------------------------------\n");
                fprintf(fptr,"Executed on: %s",ctime(&t));
                fprintf(fptr,"Shape : Triangle\n");
                fprintf(fptr,"Input:\n\tside 1 = %.2f, side 2 = %.2f, side 3 = %.2f\n",s1,s2,s3);
                fprintf(fptr,"Output:\n\tArea = %.2f\n\tPerimeter = %.2f\n\n",area,perimeter);

                fclose(fptr);
                break;

            default:
                printf("\nIncorrect option! Please choose a number between 1-3.\n");
                break;
        }
        printf("\n\nDo you want to work with triangle again? Y/N\n");
        scanf(" %c", &again);
        again = toupper(again);
    }
    
    return 0;
}

#endif