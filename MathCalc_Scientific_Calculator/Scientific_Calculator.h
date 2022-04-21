#ifndef SCIENTIFIC_CALCULATOR_H_INCLUDED
#define SCIENTIFIC_CALCULATOR_H_INCLUDED


int scalc()
{
    int choice, i, a, b, result2;
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
        printf("\t15- Sec(x)\n");
        printf("\t16- Cot(x)\n");
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
            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
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

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tSubtraction\n");
            printf("\n\n\t\tSubtraction\n\n");
            fprintf(fptr,"Input:\n");
            printf("\t\t X - Y\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            fprintf(fptr,"\n%f",x);
            printf("\nEnter Y: ");
            scanf("%f", &y);
            fprintf(fptr,"\n%f",y);
            result = x - y;
            printf("\nResult: %f", result);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f",result);

            break;

        case 3:

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tMultiplication\n");
            printf("\n\n\t\tMultiplication\n\n");
            fprintf(fptr,"Input:\n");
            printf("\t\t X * Y\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            fprintf(fptr,"\n%f",x);
            printf("\nEnter Y: ");
            scanf("%f", &y);
            fprintf(fptr,"\n%f",y);
            result = x * y;
            printf("\nResult: %f", result);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f",result);


            break;

        case 4:

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tDivision\n");
            printf("\n\n\t\tDivision\n\n");
            fprintf(fptr,"Input:\n");
            printf("\t\t X / Y\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            fprintf(fptr,"\n%f",x);
            printf("\nEnter Y: ");
            scanf("%f", &y);
            fprintf(fptr,"\n%f",y);
            result = x / y;
            printf("\nResult: %f", result);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f",result);


            break;

        case 5:

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tSquare Root\n");
            printf("\n\n\t\tSquare Root\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
            fprintf(fptr,"\n%f",x);
            result = sqrt(x);
            printf("\nResult: %f", result);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f",result);


            break;

        case 6:

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tPower\n");
            printf("\n\n\t\tPower\n\n");
            fprintf(fptr,"Input:\n");
            printf("\t\t X ^ Y\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            fprintf(fptr,"\n%f",x);
            printf("\nEnter Y: ");
            scanf("%f", &y);
            fprintf(fptr,"\n%f",y);
            result = pow(x, y);
            printf("\nResult: %f", result);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f",result);


            break;

        case 7:

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\t10^x\\n");
            printf("\n\n\t\t10^x\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter x: ");
            scanf("%f", &x);
            fprintf(fptr,"\n%f",x);
            result = pow(10, x);
            printf("\nResult: %f", result);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f",result);


            break;

        case 8:

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tFactorial\n");
            printf("\n\n\t\tFactorial\n\n");
            printf("\t\t X !\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
            fprintf(fptr,"\n%f",x);
            result = 1;
            for(i = 1; i <= x; i++) {
            result = result * i;
            }
            printf("\nResult: %.f", result);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f",result);


            break;

        case 9:
            
            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tLogarithm\n");
            printf("\n\n\t\tLogarithm\n\n");
            printf("\t\t Log10(x)\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter x: ");
            scanf("%f", &x);
            fprintf(fptr,"\n%f",x);
            result = log10(x);
            printf("\nResult: %f", result);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f",result);

            break;

        case 10:

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tExponential\n");
            printf("\n\n\t\tExponential\n\n");
            printf("\t\t e ^ x\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter x: ");
            scanf("%f", &x);
            fprintf(fptr,"\n%f",x);
            result = exp(x);
            printf("\nResult: %f", result);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f",result);


            break;

        case 11:

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tSin(x)\n");
            printf("\n\n\t\tSin(x)\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
            fprintf(fptr,"\n%f",x);
            result = sin(x * PI / 180);
            result1 = sin(x);
            printf("Sin(%f) = %f in degree mode\n", x, result);
            printf("Sin(%f) = %f in radian mode\n", x, result1);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f",result);


            break;

        case 12:

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tCos(x)\n");
            printf("\n\n\t\tCos(x)\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
            fprintf(fptr,"\n%f",x);
            result = cos(x * PI / 180);
            result1 = cos(x);
            printf("Cos(%f) = %f in degree mode\n", x, result);
            printf("Cos(%f) = %f in radian mode\n", x, result1);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f",result);


            break;

        case 13:

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tTan(x)\n");
            printf("\n\n\t\tTan(x)\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
            fprintf(fptr,"\n%f",x);
            result = tan(x * PI / 180);
            result1 = tan(x);
            printf("Tan(%f) = %f in degree mode\n", x, result);
            printf("Tan(%f) = %f in radian mode\n", x, result1);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f",result);


            break;

        case 14:

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tCosec(x)\n");
            printf("\n\n\t\tCosec(x)\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
            fprintf(fptr,"\n%f",x);
            result = 1 / (sin(x * PI / 180));
            result1 = 1 / sin(x);
            printf("Cosec(%f) = %f in degree mode\n", x, result);
            printf("Cosec(%f) = %f in radian mode\n", x, result1);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f",result);


            break;

        case 15:

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tSec(x)\n");
            printf("\n\n\t\tSec(x)\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
            fprintf(fptr,"\n%f",x);
            result = 1 / cos(x * PI / 180);
            result1 = 1 / cos(x);
            printf("Sec(%f) = %f in degree mode\n", x, result);
            printf("Sec(%f) = %f in radian mode\n", x, result1);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f",result);


            break;

        case 16:

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tCot(x)\n");
            printf("\n\n\t\tCot(x)\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
            fprintf(fptr,"\n%f",x);
            result = 1 / tan(x * PI / 180);
            result1 = 1 / tan(x);
            printf("Cot(%f) = %f in degree mode\n", x, result);
            printf("Cot(%f) = %f in radian mode\n", x, result1);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f",result);

            break;

        case 17:

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tSin Inverse\n");
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
            fprintf(fptr,"\n%f",x);
            result = asin(x);
            printf("Inverse of sin(%f) = %f radians\n", x, result);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f",result);

            break;

        case 18:

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tCos Inverse\n");
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
            fprintf(fptr,"\n%f",x);
            result = acos(x);
            printf("Inverse of cos(%f) = %f radians\n", x, result);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f",result);

            break;

        case 19:

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tTan Inverse\n");
            printf("\n\n\t\tTan Inverse\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%f", &x);
            fprintf(fptr,"\n%f",x);
            result = atan(x);
            printf("Inverse of tan(%f) = %f in radians\n", x, result);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f",result);


            break;

        case 20:

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tModulus\n");
            printf("\n\n\t\tModulus\n\n");
            printf("\t\t X % Y\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter X: ");
            scanf("%d", &a);
            fprintf(fptr,"\n%d",a);
            printf("\nEnter Y: ");
            scanf("%d", &b);
            fprintf(fptr,"\n%d",b);
            result2 = a % b;
            printf("\nResult: %d", result2);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%d",result2);


            break;

        case 21:

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tDegree to Radian\n");
            printf("\n\n\t\tDegree to Radian\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter the angle in degrees :");
            scanf("%f",&degrees);
            fprintf(fptr,"\n%f degrees",degrees);
            radians = 0.0174532925*degrees;
            printf("%.2f degrees = %f radians",degrees,radians);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f radians",radians);


            break;

        case 22:

            fprintf(fptr,"\n\n\n----------------------------------------------------------------------\n");
            fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
            fprintf(fptr,"\n\t\t\tRadian to Degree\n");
            printf("\n\n\t\tRadian to Degree\n\n");
            fprintf(fptr,"Input:\n");
            printf("Enter the angle in radians :");
            scanf("%f",&radians);
            fprintf(fptr,"\n%f radians",radians);
            degrees = 57.2957795*radians;
            printf("%f radians = %.2f degrees",radians,degrees);
            fprintf(fptr,"\n\nOutput:\n\n");
            fprintf(fptr,"%f degrees",degrees);

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
