#ifndef SCIENTIFIC_CALCULATOR_H_INCLUDED
#define SCIENTIFIC_CALCULATOR_H_INCLUDED


int scalc()
{
    int choice, i, a, b;
    float x, y, result, result1;
    float degrees,radians;
    float PI = 3.141592654;
    int operation;
    char again = 'Y';
    time_t t;   
    time(&t);
    FILE *fptr;
    fptr = (fopen("MathCalc_Scientific_Calculator/Scientific_Calculator_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    printf("\n\t\tWelcome to your Scientific Calculator!\n");
    while (again == 'Y')
    {

        printf("\n\nPlease type in the number associated to the operation you wish to perform.\n\n");
        printf("\t1- Addition\n");
        printf("\t2- Subtraction\n");
        printf("\t3- Multiplication\n");
        printf("\t4- Division\n");
        printf("\t5- Square Root\n");
        printf("\t6- Power\n");
        printf("\t7- 10^x\n");
        printf("\t8- Factorial\n");
        printf("\t9- Log10(x)\n");
        printf("\t10- Exponential\n");
        printf("\t11- Sin(x)\n");
        printf("\t12- Cos(x)\n");
        printf("\t13- Tan(x)\n");
        printf("\t14- Cosec(x)\n");
        printf("\t15- Cot(x)\n");
        printf("\t16- Sec(x)\n");
        printf("\t17- Sin Inverse  \n");
        printf("\t18- Cos Inverse\n");
        printf("\t19- Tan Inverse\n");
        printf("\t20- Modulus\n");
        printf("\t21- Degree to Radian\n");
        printf("\t22- Radian to Degree\n");


        printf("\n\nEnter your choice: ");
        scanf(" %d", &operation);


        switch (operation){

        case 1:
            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tAddition\n");
            printf("\n\n\t\tAddition\n\n");
            fprintf(fptr,"Input:\n");
            printf("\t\t X + Y\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            fprintf(fptr,"\n%f",x);
            printf("\nEnter Y: ");
            scanf("%f", &y);
            fprintf(fptr,"\n%f\n",y);
            result = x + y;
            printf("\nResult: %f", result);
            fprintf(fptr,"\nOutput:\n\n");
            fprintf(fptr,"%f",result);

            break;

        case 2:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tSubtraction\n");
            printf("\n\n\t\tSubtraction\n\n");
            fprintf(fptr,"Input:\n");
            printf("\t\t X - Y\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            printf("\nEnter Y: ");
            scanf("%f", &y);
            result = x - y;
            printf("\nResult: %f", result);

            break;

        case 3:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tMultiplication\n");
            printf("\n\n\t\tMultiplication\n\n");
            fprintf(fptr,"Input:\n");
            printf("\t\t X * Y\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            printf("\nEnter Y: ");
            scanf("%f", &y);
            result = x * y;
            printf("\nResult: %f", result);


            break;

        case 4:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tDivision\n");
            printf("\n\n\t\tDivision\n\n");
            fprintf(fptr,"Input:\n");
            printf("\t\t X / Y\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            printf("\nEnter Y: ");
            scanf("%f", &y);
            result = x / y;
            printf("\nResult: %f", result);


            break;

        case 5:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tSquare Root\n");
            printf("\n\n\t\tSquare Root\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = sqrt(x);
            printf("\nResult: %f", result);


            break;

        case 6:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tPower\n");
            printf("\n\n\t\tPower\n\n");
            fprintf(fptr,"Input:\n");
            printf("\t\t X ^ Y\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            printf("\nEnter Y: ");
            scanf("%f", &y);
            result = pow(x, y);
            printf("\nResult: %f", result);


            break;

        case 7:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t10^x\\n");
            printf("\n\n\t\t10^x\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter x: ");
            scanf("%f", &x);
            result = pow(10, x);
            printf("\nResult: %f", result);


            break;

        case 8:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tFactorial\n");
            printf("\n\n\t\tFactorial\n\n");
            printf("\t\t X !\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = 1;
            for(i = 1; i <= x; i++) {
            result = result * i;
            }
            printf("\nResult: %.f", result);


            break;

        case 9:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tLogarithm\n");
            printf("\n\n\t\tLogarithm\n\n");
            printf("\t\t Log10(x)\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter x: ");
            scanf("%f", &x);
            result = log10(x);
            printf("\nResult: %f", result);

            break;

        case 10:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tExponential\n");
            printf("\n\n\t\tExponential\n\n");
            printf("\t\t e ^ x\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter x: ");
            scanf("%f", &x);
            result = exp(x);
            printf("\nResult: %f", result);


            break;

        case 11:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tSin(x)\n");
            printf("\n\n\t\tSin(x)\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = sin(x * PI / 180);
            result1 = sin(x);
            printf("Sin(%f) = %f in degrees\n", x, result);
            printf("Sin(%f) = %f in radians\n", x, result1);


            break;

        case 12:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tCos(x)\n");
            printf("\n\n\t\tCos(x)\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = cos(x * PI / 180);
            result1 = cos(x);
            printf("Cos(%f) = %f in degrees\n", x, result);
            printf("Cos(%f) = %f in radians\n", x, result1);


            break;

        case 13:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tTan(x)\n");
            printf("\n\n\t\tTan(x)\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = tan(x * PI / 180);
            result1 = tan(x);
            printf("Tan(%f) = %f in degrees\n", x, result);
            printf("Tan(%f) = %f in radians\n", x, result1);


            break;

        case 14:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tCosec(x)\n");
            printf("\n\n\t\tCosec(x)\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = 1 / (sin(x * PI / 180));
            result1 = 1 / sin(x);
            printf("Cosec(%f) = %f in degrees\n", x, result);
            printf("Cosec(%f) = %f in radians\n", x, result1);


            break;

        case 15:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tSec(x)\n");
            printf("\n\n\t\tSec(x)\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = 1 / cos(x * PI / 180);
            result1 = 1 / cos(x);
            printf("Sec(%f) = %f in degrees\n", x, result);
            printf("Sec(%f) = %f in radians\n", x, result1);


            break;

        case 16:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tCot(x)\n");
            printf("\n\n\t\tCot(x)\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = 1 / tan(x * PI / 180);
            result1 = 1 / tan(x);
            printf("Cot(%f) = %f in degrees\n", x, result);
            printf("Cot(%f) = %f in radians\n", x, result1);

            break;

        case 17:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tSin Inverse\n");
            printf("\n\n\t\tSin Inverse\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
             //verifying if x is valid
            while((x < -1)||(x > 1))
             {
                printf("\nPlease input a value ranging between -1 and 1 : ");
                scanf("%f",&x);
             }
   
            result = asin(x);
            printf("Inverse of sin(%f) = %f in radians\n", x, result);

            break;

        case 18:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tCos Inverse\n");
            printf("\n\n\t\tCos Inverse\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
            //verifying if x is valid
            while((x < -1)||(x > 1))
             {
                printf("\nPlease input a value ranging between -1 and 1 : ");
                scanf("%f",&x);
             }
            result = acos(x);
            printf("Inverse of cos(%f) = %f in radians\n", x, result);


            break;

        case 19:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tTan Inverse\n");
            printf("\n\n\t\tTan Inverse\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = atan(x);
            printf("Inverse of tan(%f) = %f in radians\n", x, result);


            break;

        case 20:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tModulus\n");
            printf("\n\n\t\tModulus\n\n");
            printf("\t\t X % Y\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &a);
            printf("\nEnter Y: ");
            scanf("%f", &b);
            result = a % b;
            printf("\nResult: %d", result);


            break;

        case 21:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tDegree to Radian\n");
            printf("\n\n\t\tDegree to Radian\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter the angle in degrees :");
            scanf("%f",&degrees);
            radians = 0.0174532925*degrees;
            printf("%.2f degrees = %f radians",degrees,radians);
            fprintf(fptr,"%.2f degrees = %f radians",degrees,radians);


            break;

        case 22:

            fprintf(fptr,"\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\tRadian to Degree\n");
            printf("\n\n\t\tRadian to Degree\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter the angle in radians :");
            scanf("%f",&radians);
            degrees = 57.2957795*radians;
            printf("%f radians = %.2f degrees",radians,degrees);
            fprintf(fptr,"%f radians = %.2f degrees",radians,degrees);

            break;


        default:
            printf("\nIncorrect option! Please choose a number 1-22.\n");
            break;
        }

        printf("\n\nDo you want to calculate again? Y/N\n");
        scanf(" %c", &again);
        again = toupper(again);
    }
    fclose(fptr);

    return 0;
}

#endif
