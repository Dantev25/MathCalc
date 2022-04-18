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

            printf("\n\n\t\tAddition\n\n");
            printf("\t\t X + Y\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            printf("\nEnter Y: ");
            scanf("%f", &y);
            result = x + y;
            printf("\nResult: %f", result);


            break;

        case 2:

            printf("\n\n\t\tSubtraction\n\n");
            printf("\t\t X - Y\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            printf("\nEnter Y: ");
            scanf("%f", &y);
            result = x - y;
            printf("\nResult: %f", result);

            break;

        case 3:

            printf("\n\n\t\tMultiplication\n\n");
            printf("\t\t X * Y\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            printf("\nEnter Y: ");
            scanf("%f", &y);
            result = x * y;
            printf("\nResult: %f", result);


            break;

        case 4:

            printf("\n\n\t\tDivision\n\n");
            printf("\t\t X / Y\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            printf("\nEnter Y: ");
            scanf("%f", &y);
            result = x / y;
            printf("\nResult: %f", result);


            break;

        case 5:

            printf("\n\n\t\tSquare Root\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = sqrt(x);
            printf("\nResult: %f", result);


            break;

        case 6:

            printf("\n\n\t\tPower\n\n");
            printf("\t\t X ^ Y\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            printf("\nEnter Y: ");
            scanf("%f", &y);
            result = pow(x, y);
            printf("\nResult: %f", result);


            break;

        case 7:

            printf("\n\n\t\t10^x\n\n");
            printf("Enter x: ");
            scanf("%f", &x);
            result = pow(10, x);
            printf("\nResult: %f", result);


            break;

        case 8:

            printf("\n\n\t\tFactorial\n\n");
            printf("\t\t X !\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = 1;
            for(i = 1; i <= x; i++) {
            result = result * i;
            }
            printf("\nResult: %.f", result);


            break;

        case 9:

            printf("\n\n\t\tLogarithm\n\n");
            printf("\t\t Log10(x)\n\n");
            printf("Enter x: ");
            scanf("%f", &x);
            result = log10(x);
            printf("\nResult: %f", result);

            break;

        case 10:

            printf("\n\n\t\tExponential\n\n");
            printf("\t\t e ^ x\n\n");
            printf("Enter x: ");
            scanf("%f", &x);
            result = exp(x);
            printf("\nResult: %f", result);


            break;

        case 11:

            printf("\n\n\t\tSin(x)\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = sin(x * PI / 180);
            result1 = sin(x);
            printf("Sin(%f) = %f in degrees\n", x, result);
            printf("Sin(%f) = %f in radians\n", x, result1);


            break;

        case 12:

            printf("\n\n\t\tCos(x)\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = cos(x * PI / 180);
            result1 = cos(x);
            printf("Cos(%f) = %f in degrees\n", x, result);
            printf("Cos(%f) = %f in radians\n", x, result1);


            break;

        case 13:

            printf("\n\n\t\tTan(x)\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = tan(x * PI / 180);
            result1 = tan(x);
            printf("Tan(%f) = %f in degrees\n", x, result);
            printf("Tan(%f) = %f in radians\n", x, result1);


            break;

        case 14:

            printf("\n\n\t\tCosec(x)\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = 1 / (sin(x * PI / 180));
            result1 = 1 / sin(x);
            printf("Cosec(%f) = %f in degrees\n", x, result);
            printf("Cosec(%f) = %f in radians\n", x, result1);


            break;

        case 15:

            printf("\n\n\t\tSec(x)\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = 1 / cos(x * PI / 180);
            result1 = 1 / cos(x);
            printf("Cosec(%f) = %f in degrees\n", x, result);
            printf("Cosec(%f) = %f in radians\n", x, result1);


            break;

        case 16:

            printf("\n\n\t\tCot(x)\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = 1 / tan(x * PI / 180);
            result1 = 1 / tan(x);
            printf("Cot(%f) = %f in degrees\n", x, result);
            printf("Cot(%f) = %f in radians\n", x, result1);

            break;

        case 17:

            printf("\n\n\t\tSin Inverse\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = asin(x * PI / 180);
            result1 = asin(x);
            printf("Inverse of sin(%f) = %f in degrees\n", x, result);
            printf("Inverse of sin(%f) = %f in radians\n", x, result1);

            break;

        case 18:

            printf("\n\n\t\tCos Inverse\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = acos(x * PI / 180);
            result1 = acos(x);
            printf("Inverse of cos(%f) = %f in degrees\n", x, result);
            printf("Inverse of cos(%f) = %f in radians\n", x, result1);


            break;

        case 19:

            printf("\n\n\t\tTan Inverse\n\n");
            printf("Enter X: ");
            scanf("%f", &x);
            result = atan(x * PI / 180);
            result1 = atan(x);
            printf("Inverse of tan(%f) = %f in degrees\n", x, result);
            printf("Inverse of tan(%f) = %f in radians\n", x, result1);


            break;

        case 20:

            printf("\n\n\t\tModulus\n\n");
            printf("\t\t X % Y\n\n");
            printf("Enter X: ");
            scanf("%f", &a);
            printf("\nEnter Y: ");
            scanf("%f", &b);
            result = a % b;
            printf("\nResult: %d", result);


            break;

        case 21:

            printf("\n\n\t\tDegree to Radian\n\n");
            printf("Enter the angle in degrees :");
            scanf("%f",&degrees);
            radians = 0.0174532925*degrees;
            printf("%.2f degrees = %f radians",degrees,radians);


            break;

        case 22:

            printf("\n\n\t\tRadian to Degree\n\n");
            printf("Enter the angle in radians :");
            scanf("%f",&radians);
            degrees = 57.2957795*radians;
            printf("%f radians = %.2f degrees",radians,degrees);

            break;


        default:
            printf("\nIncorrect option! Please choose a number 1-22.\n");
            break;
        }

        printf("\n\nDo you want to calculate again? Y/N\n");
        scanf(" %c", &again);
        again = toupper(again);
    }

    return 0;
}

#endif
