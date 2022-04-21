#ifndef AR_VOL_RHOMBUS_H_INCLUDED
#define AR_VOL_RHOMBUS_H_INCLUDED

/*function to calculate area and perimeter of rhombus*/
float rhombus()
{
    float side, x, d1, d2, area, perimeter, a;
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
        printf("By which method would you like to carry the operations for rhombus:\n");
        printf("1. By using angle\n2. By using diagonal");
        printf("\n\nInput your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Input the length of the side of the rhombus: ");
            scanf("%f",&side);

            while(side <= 0){
                printf("\nCan only input positive integer for length of the side!\nInput again: ");
                scanf("%f",&side);
            }

            printf("\nInput value of the angle (in radians): ");
            scanf("%f",&x);

            while((x <= 0)||(x >= M_PI)){
                printf("\nAngle should have a value between 0 and pi!\nInput again: ");
                scanf("%f",&x);
            }

            a = pow(side,2);
            //calculate diagonals
            d1 = sqrt(a + a - (2 * side * side * cos(x)));
            d2 = sqrt((4 * a) - (pow(d1,2)));

            printf("\nCalculated diagonal 1 = %.2f\n",d1);
            printf("Calculated diagonal 2 = %.2f\n",d2);

            area = (d1 * d2)/2;    //formula for area
            perimeter = side * 4;  //formula for volume

            printf("\nArea of rhombus = %.2f\n",area);
            printf("Perimeter of rhombus = %.2f\n",perimeter);

            /*entry in log file*/
            fprintf(fptr,"------------------------------------------------\n");
            fprintf(fptr,"Executed on: %s",ctime(&t));
            fprintf(fptr,"Shape : Rhombus\n");
            fprintf(fptr,"Input:\n\tlength of side = %.2f, angle (in radians) = %.3f\n",side,x);
            fprintf(fptr,"Output:\n\tCalculated diagonal 1 = %.2f, calculated diagonal 2 = %.2f\n",d1,d2);
            fprintf(fptr,"\tArea = %.2f\n\tPerimeter = %.2f\n\n",area,perimeter);

            fclose(fptr);
            break;

        case 2:
            printf("Input the length of the side of the rhombus: ");
            scanf("%f",&side);

            while(side <= 0){
                printf("\nCan only input positive integer for length of the side!\nInput again: ");
                scanf("%f",&side);
            }

            printf("\nInput length of diagonal 1 of the rhombus: ");
            scanf("%f",&d1);

            while(d1 <= 0){
                printf("\nCan only input positive integer for length of diagonal!\nInput again: ");
                scanf("%f",&d1);
            }

            d2 = sqrt((4 * pow(side,2)) - (pow(d1,2)));    //calculate diagonal 2
            printf("\nCalculated diagonal 2 = %.2f\n",d2);

            area = (d1 * d2)/2;
            perimeter = side * 4;

            printf("\nArea of rhombus = %.2f\n",area);
            printf("Perimeter of rhombus = %.2f\n",perimeter);

            /*entry in log file*/
            fprintf(fptr,"------------------------------------------------\n");
            fprintf(fptr,"Executed on: %s",ctime(&t));
            fprintf(fptr,"Shape : Rhombus\n");
            fprintf(fptr,"Input:\n\tlength of side = %.2f, diagonal 1 = %.2f\n",side,d1);
            fprintf(fptr,"Output:\n\tcalculated diagonal 2 = %.2f\n",d2);
            fprintf(fptr,"\tArea = %.2f\n\tPerimeter = %.2f\n\n",area,perimeter);

            fclose(fptr);
            break;
    
        default:
            printf("\nIncorrect option! Please choose a number between 1-2.\n");
            break;
        }
        printf("\n\nDo you want to work with rhombus again? Y/N\n");
        scanf(" %c", &again);
        again = toupper(again);
    }

    return 0;
}

#endif